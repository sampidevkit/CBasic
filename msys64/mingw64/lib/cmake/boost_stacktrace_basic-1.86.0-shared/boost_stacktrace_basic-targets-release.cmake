#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Boost::stacktrace_basic" for configuration "Release"
set_property(TARGET Boost::stacktrace_basic APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Boost::stacktrace_basic PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/libboost_stacktrace_basic-mt.dll.a"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/libboost_stacktrace_basic-mt.dll"
  )

list(APPEND _cmake_import_check_targets Boost::stacktrace_basic )
list(APPEND _cmake_import_check_files_for_Boost::stacktrace_basic "${_IMPORT_PREFIX}/lib/libboost_stacktrace_basic-mt.dll.a" "${_IMPORT_PREFIX}/bin/libboost_stacktrace_basic-mt.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
