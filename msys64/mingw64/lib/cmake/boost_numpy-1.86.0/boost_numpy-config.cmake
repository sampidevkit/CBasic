# Generated by BoostInstall.cmake for boost_numpy-1.86.0

if(Boost_VERBOSE OR Boost_DEBUG)
  message(STATUS "Found boost_numpy ${boost_numpy_VERSION} at ${boost_numpy_DIR}")
endif()

include(CMakeFindDependencyMacro)

if(NOT boost_numpy311_FOUND)
  find_dependency(boost_numpy311 1.86.0 EXACT HINTS "${CMAKE_CURRENT_LIST_DIR}/..")
endif()

include("${CMAKE_CURRENT_LIST_DIR}/boost_numpy-targets.cmake")