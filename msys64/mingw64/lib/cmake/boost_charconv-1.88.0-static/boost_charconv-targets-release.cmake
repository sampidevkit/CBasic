#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Boost::charconv" for configuration "Release"
set_property(TARGET Boost::charconv APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Boost::charconv PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libboost_charconv-mt.a"
  )

list(APPEND _cmake_import_check_targets Boost::charconv )
list(APPEND _cmake_import_check_files_for_Boost::charconv "${_IMPORT_PREFIX}/lib/libboost_charconv-mt.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
