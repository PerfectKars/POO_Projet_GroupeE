cmake_minimum_required(VERSION 3.10)
project(JeuDeLaVie)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_executable(jeu ${SOURCES})

find_package(SFML 3 REQUIRED COMPONENTS Graphics Window System)

target_link_libraries(jeu
    sfml-graphics
    sfml-window
    sfml-system
)
