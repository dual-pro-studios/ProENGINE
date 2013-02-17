#include <SFML/Graphics.hpp>

class Tile {
public:
    Tile(float x, float y);
    Tile();
    ~Tile();
    sf::Sprite getSprite();
    void setSprite(sf::Sprite n_sprite);
    void setPosition(float x, float y);
    int ID;
    float getX();
    float getY();
private:
    float x;
    float y;
    sf::Sprite t_sprite;
};