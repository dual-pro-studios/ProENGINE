#include "TextBox.h"

using namespace std;
using namespace lost;

TextBox::TextBox(string text)
{
    this->text.setString(text);
}

TextBox::TextBox()
{
    this->text.setString("Default string, no string given.");
}

TextBox::~TextBox()
{
    
}

void TextBox::setText(string text)
{
    this->text.setString(text);
}

void TextBox::popTextBox(string text)
{
    this->text.setString(text);
}

void TextBox::show(Renderer &game)
{
    textbox.setSize(sf::Vector2f(game.game.getSize().x, game.game.getSize().y/2));
    textbox.setPosition(game.gameView.getCenter().x - game.gameView.getSize().x/2, game.gameView.getCenter().y - game.gameView.getSize().y/2);
    textbox.setFillColor(sf::Color::Color(50, 0, 100, 0));
    if(!sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
        textbox.setFillColor(sf::Color::Color(50, 0, 100, 0));
        game.game.draw(textbox);
    }
}