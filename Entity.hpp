#pragma once
#include "Mathf.hpp"
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class Entity
{
public:
    Entity(Vector2f pos, SDL_Texture *tex);

    void set_size(Vector2f size);

    Vector2f get_position() { return position; }
    Vector2f get_size() { return size; }

    SDL_Texture *get_texture() { return texture; }

private:
    Vector2f position;
    Vector2f size;

    SDL_Texture *texture;
};