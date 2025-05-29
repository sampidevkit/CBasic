#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Boost::iostreams" for configuration "Release"
set_property(TARGET Boost::iostreams APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Boost::iostreams PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/libboost_iostreams-mt.dll.a"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "zstd::libzstd_shared"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/libboost_iostreams-mt.dll"
  )

list(APPEND _cmake_import_check_targets Boost::iostreams )
list(APPEND _cmake_import_check_files_for_Boost::iostreams "${_IMPORT_PREFIX}/lib/libboost_iostreams-mt.dll.a" "${_IMPORT_PREFIX}/bin/libboost_iostreams-mt.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
