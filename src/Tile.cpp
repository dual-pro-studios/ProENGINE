#include "Tile.h"

Tile::Tile(float x, float y)
{
    this->x = x;
    this->y = y;
}

Tile::Tile()
{
    
}

Tile::~Tile()
{
    
}

void Tile::setSprite(sf::Sprite n_sprite)
{
    t_sprite = n_sprite;
}

void Tile::setPosition(float x, float y)
{
    this->x = x;
    this->y = y;
    t_sprite.setPosition(x, y);
}

sf::Sprite Tile::getSprite()
{
    return t_sprite;
}

float Tile::getX()
{
    return x;
}

float Tile::getY()
{
    return y;
}