#include "Player.hpp"

Player::Player(Vector2f pos, SDL_Texture *tex, bool active) : Entity(pos, tex)
{
    this->set_active(active);
}

void Player::move()
{
    std::cout << "CAN MOVE" << std::endl;
}

void Player::update()
{
    if (is_active)
    {
        move();
    }
}

void Player::set_active(bool a)
{
    this->is_active = a;
}