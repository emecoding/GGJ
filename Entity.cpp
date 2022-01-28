#include "Entity.hpp"

Entity::Entity(Vector2f pos, SDL_Texture *tex) : position(pos), texture(tex)
{
    rect.x = 0;
    rect.y = 0;
    rect.w = 0;
    rect.h = 0;

    this->set_size(Vector2f(32, 32));
}

void Entity::update()
{
}

void Entity::set_position(Vector2f pos)
{
    position = pos;
}
void Entity::set_position(float x, float y)
{
    position.X = x;
    position.Y = y;
}
void Entity::set_size(Vector2f size)
{
    this->size = size;
    rect.w = this->size.X;
    rect.h = this->size.Y;
}