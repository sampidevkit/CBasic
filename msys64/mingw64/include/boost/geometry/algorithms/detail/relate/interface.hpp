// Boost.Geometry (aka GGL, Generic Geometry Library)

// Copyright (c) 2007-2012 Barend Gehrels, Amsterdam, the Netherlands.

// This file was modified by Oracle on 2013-2022.
// Modifications copyright (c) 2013-2022 Oracle and/or its affiliates.

// Contributed and/or modified by Adam Wulkiewicz, on behalf of Oracle

// Use, modification and distribution is subject to the Boost Software License,
// Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_GEOMETRY_ALGORITHMS_DETAIL_RELATE_INTERFACE_HPP
#define BOOST_GEOMETRY_ALGORITHMS_DETAIL_RELATE_INTERFACE_HPP


#include <tuple>

#include <boost/geometry/algorithms/detail/relate/de9im.hpp>
#include <boost/geometry/algorithms/not_implemented.hpp>
#include <boost/geometry/core/coordinate_dimension.hpp>
#include <boost/geometry/core/tag.hpp>
#include <boost/geometry/core/tags.hpp>
#include <boost/geometry/core/topological_dimension.hpp>
#include <boost/geometry/geometries/adapted/boost_variant.hpp>
#include <boost/geometry/geometries/concepts/check.hpp>
#include <boost/geometry/strategies/default_strategy.hpp>
#include <boost/geometry/strategies/detail.hpp>
#include <boost/geometry/strategies/relate/services.hpp>
#include <boost/geometry/util/sequence.hpp>
#include <boost/geometry/util/type_traits.hpp>


namespace boost { namespace geometry {


#ifndef DOXYGEN_NO_DETAIL
namespace detail { namespace relate {

// is_generic allows dispatch::relate to generate compile-time error
template <typename Geometry1, typename Geometry2>
struct is_generic
{
    static const bool value = (util::is_polysegmental<Geometry1>::value
                            && util::is_polysegmental<Geometry2>::value)
                              ||
                              (util::is_point<Geometry1>::value
                            && util::is_polysegmental<Geometry2>::value)
                              ||
                              (util::is_polysegmental<Geometry1>::value
                            && util::is_point<Geometry2>::value);
};

}} // namespace detail::relate
#endif // DOXYGEN_NO_DETAIL


#ifndef DOXYGEN_NO_DISPATCH
namespace dispatch {


template <typename Geometry1,
          typename Geometry2,
          typename Tag1 = geometry::tag_t<Geometry1>,
          typename Tag2 = geometry::tag_t<Geometry2>,
          int TopDim1 = geometry::topological_dimension<Geometry1>::value,
          int TopDim2 = geometry::topological_dimension<Geometry2>::value,
          bool IsGeneric = detail::relate::is_generic<Geometry1, Geometry2>::value
>
struct relate : not_implemented<Tag1, Tag2>
{};

} // namespace dispatch
#endif // DOXYGEN_NO_DISPATCH

#ifndef DOXYGEN_NO_DETAIL
namespace detail { namespace relate {

template <typename Geometry1, typename Geometry2>
struct interruption_enabled
{
    static const bool value =
        dispatch::relate<Geometry1, Geometry2>::interruption_enabled;
};

template <typename Geometry1, typename Geometry2, typename Result>
struct result_handler_type
    : not_implemented<Result>
{};

template <typename Geometry1, typename Geometry2>
struct result_handler_type<Geometry1, Geometry2, geometry::de9im::mask>
{
    typedef mask_handler
        <
            geometry::de9im::mask,
            interruption_enabled
                <
                    Geometry1,
                    Geometry2
                >::value
        > type;
};

template <typename Geometry1, typename Geometry2, typename ...Masks>
struct result_handler_type<Geometry1, Geometry2, std::tuple<Masks...>>
{
    typedef mask_handler
        <
            std::tuple<Masks...>,
            interruption_enabled
                <
                    Geometry1,
                    Geometry2
                >::value
        > type;
};

template <typename Geometry1, typename Geometry2,
          char II, char IB, char IE,
          char BI, char BB, char BE,
          char EI, char EB, char EE>
struct result_handler_type
    <
        Geometry1,
        Geometry2,
        geometry::de9im::static_mask<II, IB, IE, BI, BB, BE, EI, EB, EE>
    >
{
    typedef static_mask_handler
        <
            geometry::de9im::static_mask<II, IB, IE, BI, BB, BE, EI, EB, EE>,
            interruption_enabled
                <
                    Geometry1,
                    Geometry2
                >::value
        > type;
};

template <typename Geometry1, typename Geometry2, typename ...StaticMasks>
struct result_handler_type<Geometry1, Geometry2, util::type_sequence<StaticMasks...>>
{
    typedef static_mask_handler
        <
            util::type_sequence<StaticMasks...>,
            interruption_enabled
                <
                    Geometry1,
                    Geometry2
                >::value
        > type;
};


}} // namespace detail::relate
#endif // DOXYGEN_NO_DETAIL

namespace resolve_strategy
{

template
<
    typename Strategy,
    bool IsUmbrella = strategies::detail::is_umbrella_strategy<Strategy>::value
>
struct relate
{
    template <typename Geometry1, typename Geometry2, typename ResultHandler>
    static inline void apply(Geometry1 const& geometry1,
                             Geometry2 const& geometry2,
                             ResultHandler & handler,
                             Strategy const& strategy)
    {
        dispatch::relate
            <
                Geometry1,
                Geometry2
            >::apply(geometry1, geometry2, handler, strategy);
    }
};

template <typename Strategy>
struct relate<Strategy, false>
{
    template <typename Geometry1, typename Geometry2, typename ResultHandler>
    static inline void apply(Geometry1 const& geometry1,
                             Geometry2 const& geometry2,
                             ResultHandler & handler,
                             Strategy const& strategy)
    {
        using strategies::relate::services::strategy_converter;
        dispatch::relate
            <
                Geometry1,
                Geometry2
            >::apply(geometry1, geometry2, handler,
                     strategy_converter<Strategy>::get(strategy));
    }
};

template <>
struct relate<default_strategy, false>
{
    template <typename Geometry1, typename Geometry2, typename ResultHandler>
    static inline void apply(Geometry1 const& geometry1,
                             Geometry2 const& geometry2,
                             ResultHandler & handler,
                             default_strategy)
    {
        typedef typename strategies::relate::services::default_strategy
            <
                Geometry1,
                Geometry2
            >::type strategy_type;

        dispatch::relate
            <
                Geometry1,
                Geometry2
            >::apply(geometry1, geometry2, handler, strategy_type());
    }
};

} // resolve_strategy

namespace resolve_dynamic
{

template
<
    typename Geometry1, typename Geometry2,
    typename Tag1 = geometry::tag_t<Geometry1>,
    typename Tag2 = geometry::tag_t<Geometry2>
>
struct relate
{
    template <typename Mask, typename Strategy>
    static inline bool apply(Geometry1 const& geometry1,
                             Geometry2 const& geometry2,
                             Mask const& mask,
                             Strategy const& strategy)
    {
        concepts::check<Geometry1 const>();
        concepts::check<Geometry2 const>();
        assert_dimension_equal<Geometry1, Geometry2>();

        typename detail::relate::result_handler_type
            <
                Geometry1,
                Geometry2,
                Mask
            >::type handler(mask);

        resolve_strategy::relate<Strategy>::apply(geometry1, geometry2, handler, strategy);

        return handler.result();
    }
};

template <typename Geometry1, typename Geometry2, typename Tag2>
struct relate<Geometry1, Geometry2, dynamic_geometry_tag, Tag2>
{
    template <typename Mask, typename Strategy>
    static inline bool apply(Geometry1 const& geometry1,
                             Geometry2 const& geometry2,
                             Mask const& mask,
                             Strategy const& strategy)
    {
        bool result = false;
        traits::visit<Geometry1>::apply([&](auto const& g1)
        {
            result = relate
                <
                    util::remove_cref_t<decltype(g1)>,
                    Geometry2
                >::apply(g1, geometry2, mask, strategy);
        }, geometry1);
        return result;
    }
};

template <typename Geometry1, typename Geometry2, typename Tag1>
struct relate<Geometry1, Geometry2, Tag1, dynamic_geometry_tag>
{
    template <typename Mask, typename Strategy>
    static inline bool apply(Geometry1 const& geometry1,
                             Geometry2 const& geometry2,
                             Mask const& mask,
                             Strategy const& strategy)
    {
        bool result = false;
        traits::visit<Geometry2>::apply([&](auto const& g2)
        {
            result = relate
                <
                    Geometry1,
                    util::remove_cref_t<decltype(g2)>
                >::apply(geometry1, g2, mask, strategy);
        }, geometry2);
        return result;
    }
};

template <typename Geometry1, typename Geometry2>
struct relate<Geometry1, Geometry2, dynamic_geometry_tag, dynamic_geometry_tag>
{
    template <typename Mask, typename Strategy>
    static inline bool apply(Geometry1 const& geometry1,
                             Geometry2 const& geometry2,
                             Mask const& mask,
                             Strategy const& strategy)
    {
        bool result = false;
        traits::visit<Geometry1, Geometry2>::apply([&](auto const& g1, auto const& g2)
        {
            result = relate
                <
                    util::remove_cref_t<decltype(g1)>,
                    util::remove_cref_t<decltype(g2)>
                >::apply(g1, g2, mask, strategy);
        }, geometry1, geometry2);
        return result;
    }
};

} // namespace resolve_dynamic

/*!
\brief Checks relation between a pair of geometries defined by a mask.
\ingroup relate
\tparam Geometry1 \tparam_geometry
\tparam Geometry2 \tparam_geometry
\tparam Mask An intersection model Mask type.
\tparam Strategy \tparam_strategy{Relate}
\param geometry1 \param_geometry
\param geometry2 \param_geometry
\param mask An intersection model mask object.
\param strategy \param_strategy{relate}
\return true if the relation is compatible with the mask, false otherwise.

\qbk{distinguish,with strategy}
\qbk{[include reference/algorithms/relate.qbk]}
 */
template <typename Geometry1, typename Geometry2, typename Mask, typename Strategy>
inline bool relate(Geometry1 const& geometry1,
                   Geometry2 const& geometry2,
                   Mask const& mask,
                   Strategy const& strategy)
{
    return resolve_dynamic::relate
            <
                Geometry1,
                Geometry2
            >::apply(geometry1, geometry2, mask, strategy);
}

/*!
\brief Checks relation between a pair of geometries defined by a mask.
\ingroup relate
\tparam Geometry1 \tparam_geometry
\tparam Geometry2 \tparam_geometry
\tparam Mask An intersection model Mask type.
\param geometry1 \param_geometry
\param geometry2 \param_geometry
\param mask An intersection model mask object.
\return true if the relation is compatible with the mask, false otherwise.

\qbk{[include reference/algorithms/relate.qbk]}
 */
template <typename Geometry1, typename Geometry2, typename Mask>
inline bool relate(Geometry1 const& geometry1,
                   Geometry2 const& geometry2,
                   Mask const& mask)
{
    return resolve_dynamic::relate
            <
                Geometry1,
                Geometry2
            >::apply(geometry1, geometry2, mask, default_strategy());
}

}} // namespace boost::geometry

#endif // BOOST_GEOMETRY_ALGORITHMS_DETAIL_RELATE_INTERFACE_HPP
