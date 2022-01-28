#pragma once
#include "Entity.hpp"

class Player : public Entity
{
public:
    Player(Vector2f pos, SDL_Texture *tex, bool active);

    void update();

    void set_active(bool a);

private:
    bool is_active = false;

    void move();
};