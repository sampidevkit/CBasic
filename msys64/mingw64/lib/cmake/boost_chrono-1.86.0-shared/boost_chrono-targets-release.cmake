#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Boost::chrono" for configuration "Release"
set_property(TARGET Boost::chrono APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Boost::chrono PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/libboost_chrono-mt.dll.a"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/libboost_chrono-mt.dll"
  )

list(APPEND _cmake_import_check_targets Boost::chrono )
list(APPEND _cmake_import_check_files_for_Boost::chrono "${_IMPORT_PREFIX}/lib/libboost_chrono-mt.dll.a" "${_IMPORT_PREFIX}/bin/libboost_chrono-mt.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
