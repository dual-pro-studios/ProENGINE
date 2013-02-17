#include <SFML/Graphics.hpp>
#include "Renderer.h"
#include <string>

class TextBox {
    
public:
    TextBox(std::string text);
    TextBox();
    ~TextBox();
    void popTextBox(std::string text);
    void setText(std::string text);
    void show(lost::Renderer &game);
private:
    sf::Text text;
    sf::RectangleShape textbox;
};