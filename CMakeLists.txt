cmake_minimum_required(VERSION 3.17)
project(DragonSlayer)
set(CMAKE_CXX_STANDARD 17)
include_directories(Game/)
file(GLOB_RECURSE GameSrc "Game/*.h" "Game/*.cpp")
add_executable(DragonSlayer ${GameSrc})
set_target_properties(DragonSlayer PROPERTIES LINKER_LANGUAGE CXX)
if(WIN32)

else()
    target_link_libraries(DragonSlayer pthread)
endif()
