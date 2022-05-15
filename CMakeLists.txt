cmake_minimum_required(VERSION 3.23.1 FATAL_ERROR)
project(OpenBO1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Initialize submodules in the repository.
find_package(Git QUIET)
if(GIT_FOUND AND EXISTS "${PROJECT_SOURCE_DIR}/.git")
    execute_process(COMMAND ${GIT_EXECUTABLE} submodule update --init --recursive WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} RESULT_VARIABLE RESULT)
    if(NOT RESULT EQUAL "0")
      message(FATAL_ERROR "git submodule update --init --recursive failed with ${GIT_SUBMOD_RESULT}, please checkout submodules.")
    endif()
endif()

# Top-level overload with add_executable.
function(add_executable target)
    _add_executable(${target} ${ARGN})
    target_vcxproj_filters(${target})
endfunction()

# Top-level overload with add_library.
function(add_library target)
    _add_library(${target} ${ARGN})
    target_vcxproj_filters(${target})
endfunction()

# Initialize vcxproj.filters in the solution.
function(target_vcxproj_filters target)
    get_target_property(sources "${target}" SOURCES)
    foreach(filename IN LISTS sources)
      get_filename_component(path "${filename}" PATH)
      string(REPLACE "/" "\\" group "${path}")
      source_group("${group}" FILES "${filename}")
    endforeach()
endfunction()

set(PRE_CONFIGURE_FILE "src/git.h.in")
set(POST_CONFIGURE_FILE "src/git.h")
include(CMakeModules/cmake-git-version-tracking/git_watcher.cmake)

add_subdirectory(externals)
add_subdirectory(src)
