#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Boost::numpy311" for configuration "Release"
set_property(TARGET Boost::numpy311 APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Boost::numpy311 PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/libboost_numpy311-mt.dll.a"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/libboost_numpy311-mt.dll"
  )

list(APPEND _cmake_import_check_targets Boost::numpy311 )
list(APPEND _cmake_import_check_files_for_Boost::numpy311 "${_IMPORT_PREFIX}/lib/libboost_numpy311-mt.dll.a" "${_IMPORT_PREFIX}/bin/libboost_numpy311-mt.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)