#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Boost::program_options" for configuration "Release"
set_property(TARGET Boost::program_options APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Boost::program_options PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/libboost_program_options-mt.dll.a"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/libboost_program_options-mt.dll"
  )

list(APPEND _cmake_import_check_targets Boost::program_options )
list(APPEND _cmake_import_check_files_for_Boost::program_options "${_IMPORT_PREFIX}/lib/libboost_program_options-mt.dll.a" "${_IMPORT_PREFIX}/bin/libboost_program_options-mt.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
