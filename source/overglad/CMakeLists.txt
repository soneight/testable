link_libraries(son8::overglad)

add_executable(overglad-include-v1_1 v1_1.cxx)
add_test(NAME overglad-include-v1_1 COMMAND overglad-include-v1_1)

add_executable(overglad-include-v1_5 v1_5.cxx)
add_test(NAME overglad-include-v1_5 COMMAND overglad-include-v1_5)

add_executable(overglad-include-v2_1 v2_1.cxx)
add_test(NAME overglad-include-v2_1 COMMAND overglad-include-v2_1)

add_executable(overglad-include-v3_3 v3_3.cxx)
add_test(NAME overglad-include-v3_3 COMMAND overglad-include-v3_3)

add_executable(overglad-include-v4_3 v4_3.cxx)
add_test(NAME overglad-include-v4_3 COMMAND overglad-include-v4_3)

add_executable(overglad-include-comp comp.cxx)
add_test(NAME overglad-include-comp COMMAND overglad-include-comp)

add_executable(overglad-include-c3_3 c3_3.cxx)
add_test(NAME overglad-include-c3_3 COMMAND overglad-include-c3_3)

add_executable(overglad-include-c4_3 c4_3.cxx)
add_test(NAME overglad-include-c4_3 COMMAND overglad-include-c4_3)

add_executable(overglad-include-overglad overglad.cxx)
add_test(NAME overglad-include-overglad COMMAND overglad-include-overglad)
