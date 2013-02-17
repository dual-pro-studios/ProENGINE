#include <iostream>
//#include "EventManager.h"
#include <SFML/Graphics.hpp>

namespace lost {
    
class Object {
public:
    Object(/*lost::Renderer &game*/sf::RenderWindow &game1, float x, float y, int width, int height, sf::Color color);
    Object(/*lost::Renderer &game*/sf::RenderWindow &game2, float x, float y, int width, int height);
    Object(/*lost::Renderer &game*/sf::RenderWindow &game3, float x, float y);
    Object(/*lost::Renderer &game*/sf::RenderWindow &game4);
    void setRenderer(/*lost::Renderer &game*/);
    sf::RectangleShape getObj();
    void render(/*lost::Renderer &game*/sf::RenderWindow &game);
private:
    /*Renderer &gameRenderer;*/
    sf::RectangleShape obj;
};

}