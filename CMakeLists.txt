cmake_minimum_required(VERSION 3.0.0)
project(GGJ VERSION 0.1.0)

 
add_executable(GGJ main.cpp RenderWindow.cpp RenderWindow.hpp Utils.hpp Entity.cpp Entity.hpp Mathf.hpp Player.cpp Player.hpp Maps.hpp)
target_link_libraries(GGJ SDL2main SDL2 SDL2_image)

