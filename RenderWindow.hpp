#pragma once

#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include "Entity.hpp"

class RenderWindow
{
public:
    RenderWindow(const char *title, int width, int height);

    int get_refresh_rate();

    SDL_Texture *load_texture(const char *file_path);

    void render(Entity &entity);
    void display();
    void clear();
    void clean_up();

private:
    SDL_Window *window;
    SDL_Renderer *renderer;
};