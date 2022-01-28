#include "Player.hpp"

Player::Player(Vector2f pos, SDL_Texture *tex, bool active, int index) : Entity(pos, tex)
{
    this->set_active(active);
    this->index = index;
}

void Player::key_up(int key)
{
    if (key == SDLK_LEFT)
        moving_left = false;
    if (key == SDLK_RIGHT)
        moving_right = false;
    if (key == SDLK_DOWN)
        moving_down = false;
    if (key == SDLK_UP)
        moving_up = false;
}

void Player::move(int key)
{
    float dx = 0;
    float dy = 0;

    if (key == SDLK_LEFT)
        moving_left = true;
    if (key == SDLK_RIGHT)
        moving_right = true;
    if (key == SDLK_DOWN)
        moving_down = true;
    if (key == SDLK_UP)
        moving_up = true;
    //HANDLE MOVEMENT WITH MOVING LEFT JNE
    if (moving_left)
    {
        moving_right = false;
        dx -= speed;
    }
    if (moving_right)
    {
        moving_left = false;
        dx += speed;
    }
    if (moving_down)
    {
        moving_up = false;
        dy += (moving_right || moving_left ? speed / 2 : speed);
    }
    if (moving_up)
    {
        moving_down = false;
        dy -= (moving_right || moving_left ? speed / 2 : speed);
    }

    this->set_position(dx, dy);
}

bool Player::collided_with_other_player(std::vector<Player> players)
{
    for (Player player : players)
    {
        if (this->get_index() != player.get_index())
        {
            if (this->is_collided_with(player, Vector2f(0, 0)))
                return true;
        }
    }

    return false;
}

void Player::update()
{
}

void Player::set_active(bool a)
{
    this->is_active = a;
}