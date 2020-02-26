# Copyright (c) Open Enclave SDK contributors.
# Licensed under the MIT License.
add_custom_command(OUTPUT demo_u.h demo_u.c demo_args.h
  DEPENDS ${CMAKE_SOURCE_DIR}/demo.edl
  COMMAND openenclave::oeedger8r --untrusted ${CMAKE_SOURCE_DIR}/demo.edl)

add_executable(demo_host host.c ${CMAKE_CURRENT_BINARY_DIR}/demo_u.c)

if(WIN32)
  copy_oedebugrt_target(demo_host_oedebugrt)
  add_dependencies(demo_host demo_host_oedebugrt)
endif()

target_include_directories(demo_host PRIVATE
  # Needed for the generated file demo_u.h
  ${CMAKE_CURRENT_BINARY_DIR})

target_link_libraries(demo_host openenclave::oehostapp)
