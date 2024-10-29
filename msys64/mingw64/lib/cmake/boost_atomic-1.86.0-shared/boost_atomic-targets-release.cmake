#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Boost::atomic" for configuration "Release"
set_property(TARGET Boost::atomic APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Boost::atomic PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/libboost_atomic-mt.dll.a"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/libboost_atomic-mt.dll"
  )

list(APPEND _cmake_import_check_targets Boost::atomic )
list(APPEND _cmake_import_check_files_for_Boost::atomic "${_IMPORT_PREFIX}/lib/libboost_atomic-mt.dll.a" "${_IMPORT_PREFIX}/bin/libboost_atomic-mt.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
