#pragma once
#include "Entity.hpp"

class Player : public Entity
{
public:
    Player(Vector2f pos, SDL_Texture *tex, bool active);

    void update();
    void move(int key);
    void key_up(int key);

    void set_active(bool a);

private:
    bool is_active = false;

    bool moving_down = false;
    bool moving_up = false;
    bool moving_right = false;
    bool moving_left = false;

    float speed = 10.0f;
};