set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if (TARGET ${SON8PROJ})
target_sources(${SON8PROJ})
endif()

include(FetchContent)

FetchContent_Declare(
    son8overglad
    GIT_REPOSITORY https://github.com/soneight/overglad.git
    GIT_TAG        91b0479bdbdd53619136690f436c58360c12cc47
)

FetchContent_MakeAvailable(son8overglad)

add_subdirectory(overglad)
