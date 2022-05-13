file(GLOB_RECURSE OpenBO1 RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp *.h)

add_executable(OpenBO1
  ${OpenBO1}
  stdafx.cpp 
  stdafx.hpp
)

target_include_directories(OpenBO1
PRIVATE .
  "${CMAKE_SOURCE_DIR}/externals/detours/include"
)

target_precompile_headers(OpenBO1
PRIVATE
  stdafx.hpp
)

target_link_directories(OpenBO1
PRIVATE
  "${CMAKE_SOURCE_DIR}/externals/detours/lib"
)

target_link_libraries(OpenBO1
PRIVATE
  Zynamic
)

target_link_options(OpenBO1
PRIVATE
  /DYNAMICBASE:NO /NXCOMPAT:NO /SAFESEH:NO /INCREMENTAL:NO /LARGEADDRESSAWARE /LAST:.text
)

target_compile_options(OpenBO1
PRIVATE 
  /MP /Zi /FIstdafx.hpp
)

set_target_properties(OpenBO1
PROPERTIES
  PDB_OUTPUT_DIRECTORY "${ZYNAMIC_OUT}$<0:>" VS_DEBUGGER_WORKING_DIRECTORY "${ZYNAMIC_OUT}"  VS_DPI_AWARE "PerMonitor"
)

add_dependencies(OpenBO1 check_git)
