#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Boost::type_erasure" for configuration "Release"
set_property(TARGET Boost::type_erasure APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Boost::type_erasure PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/libboost_type_erasure-mt.dll.a"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "Boost::thread"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/libboost_type_erasure-mt.dll"
  )

list(APPEND _cmake_import_check_targets Boost::type_erasure )
list(APPEND _cmake_import_check_files_for_Boost::type_erasure "${_IMPORT_PREFIX}/lib/libboost_type_erasure-mt.dll.a" "${_IMPORT_PREFIX}/bin/libboost_type_erasure-mt.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
