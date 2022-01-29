#include "Entity.hpp"

Entity::Entity(Vector2f pos, SDL_Texture *tex) : position(pos), texture(tex)
{
    rect.x = 0;
    rect.y = 0;
    rect.w = 0;
    rect.h = 0;

    this->set_size(Vector2f(64, 64));
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
    position.X += x;
    position.Y += y;
}

bool Entity::is_collided_with(Entity B, Vector2f off_set)
{
    return this->get_position().Y + this->get_rect().h + off_set.Y >= B.get_position().Y &&
           this->get_position().Y + off_set.Y <= B.get_position().Y + B.get_rect().h &&
           this->get_position().X + off_set.X <= B.get_position().X + B.get_rect().w &&
           this->get_position().X + this->get_rect().w + off_set.X >= B.get_position().X;
}

void Entity::set_size(Vector2f size)
{
    this->size = size;
    rect.w = this->size.X;
    rect.h = this->size.Y;
}

void Entity::set_texture(SDL_Texture *tex)
{
    texture = tex;
}