#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Boost::thread" for configuration "Release"
set_property(TARGET Boost::thread APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Boost::thread PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/libboost_thread-mt.dll.a"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/libboost_thread-mt.dll"
  )

list(APPEND _cmake_import_check_targets Boost::thread )
list(APPEND _cmake_import_check_files_for_Boost::thread "${_IMPORT_PREFIX}/lib/libboost_thread-mt.dll.a" "${_IMPORT_PREFIX}/bin/libboost_thread-mt.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
