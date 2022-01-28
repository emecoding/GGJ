#include "Entity.hpp"

Entity::Entity(Vector2f pos, SDL_Texture *tex) : position(pos), texture(tex)
{
    this->set_size(Vector2f(32, 32));
}

void Entity::update()
{
}

void Entity::set_size(Vector2f size)
{
    this->size = size;
}