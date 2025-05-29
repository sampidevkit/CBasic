#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Boost::stacktrace_windbg_cached" for configuration "Release"
set_property(TARGET Boost::stacktrace_windbg_cached APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Boost::stacktrace_windbg_cached PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/libboost_stacktrace_windbg_cached-mt.dll.a"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/libboost_stacktrace_windbg_cached-mt.dll"
  )

list(APPEND _cmake_import_check_targets Boost::stacktrace_windbg_cached )
list(APPEND _cmake_import_check_files_for_Boost::stacktrace_windbg_cached "${_IMPORT_PREFIX}/lib/libboost_stacktrace_windbg_cached-mt.dll.a" "${_IMPORT_PREFIX}/bin/libboost_stacktrace_windbg_cached-mt.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
