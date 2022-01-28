#pragma once
#include "Mathf.hpp"
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class Entity
{
public:
    Entity(Vector2f pos, SDL_Texture *tex);

    void update();

    void set_size(Vector2f size);

    void set_position(Vector2f pos);
    void set_position(float x, float);

    Vector2f get_position() { return position; }
    Vector2f get_size() { return size; }

    SDL_Texture *get_texture() { return texture; }
    SDL_Rect get_rect() { return rect; }

private:
    Vector2f position;
    Vector2f size;

    SDL_Rect rect;
    SDL_Texture *texture;
};