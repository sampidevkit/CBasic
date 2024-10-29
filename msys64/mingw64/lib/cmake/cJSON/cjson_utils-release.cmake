#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "cjson_utils" for configuration "Release"
set_property(TARGET cjson_utils APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(cjson_utils PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/libcjson_utils.dll.a"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/libcjson_utils-1.dll"
  )

list(APPEND _cmake_import_check_targets cjson_utils )
list(APPEND _cmake_import_check_files_for_cjson_utils "${_IMPORT_PREFIX}/lib/libcjson_utils.dll.a" "${_IMPORT_PREFIX}/bin/libcjson_utils-1.dll" )

# Import target "cjson_utils-static" for configuration "Release"
set_property(TARGET cjson_utils-static APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(cjson_utils-static PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libcjson_utils.a"
  )

list(APPEND _cmake_import_check_targets cjson_utils-static )
list(APPEND _cmake_import_check_files_for_cjson_utils-static "${_IMPORT_PREFIX}/lib/libcjson_utils.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
