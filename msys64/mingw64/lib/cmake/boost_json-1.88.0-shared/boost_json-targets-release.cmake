#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Boost::json" for configuration "Release"
set_property(TARGET Boost::json APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Boost::json PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/libboost_json-mt.dll.a"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/libboost_json-mt.dll"
  )

list(APPEND _cmake_import_check_targets Boost::json )
list(APPEND _cmake_import_check_files_for_Boost::json "${_IMPORT_PREFIX}/lib/libboost_json-mt.dll.a" "${_IMPORT_PREFIX}/bin/libboost_json-mt.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
