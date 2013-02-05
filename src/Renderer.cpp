#include "Renderer.h"

using namespace lost;

Renderer::Renderer(void)
{
}


Renderer::~Renderer(void)
{
}

void Renderer::render_all()
{
	game.clear();
	game.setView(gameView);
	render_objs();
	game.display();
}

void Renderer::create(int width, int height, const std::string title)
{
	loader.load_all();
	game.create(sf::VideoMode(width, height), title);
	gameView.reset(sf::FloatRect(0, 0, width, height));
	game.setView(gameView);
	game.setFramerateLimit(60);
	gameState = OPEN;
	objIndex = 0;
}

void Renderer::create()
{
	game.create(sf::VideoMode(640, 480), "ProENGINE");
	game.setFramerateLimit(60);
	gameState = OPEN;
	objIndex = 0;
}

void Renderer::createRect()
{
	objIndex = 5;
	loader.sprites.setPosition(304, 218);
	loader.sprites.setColor(sf::Color::Color(255, 255, 255, 255));
	objs = new sf::RectangleShape[objIndex];
	objs[0].setPosition(0, 0);
	objs[0].setFillColor(sf::Color::Magenta);
	objs[0].setSize(sf::Vector2f(32, 32));
	objs[1].setPosition(32,0);
	objs[1].setFillColor(sf::Color::Green);
	objs[1].setSize(sf::Vector2f(32, 32));
	objs[4].setPosition(300, 245);
	objs[4].setFillColor(sf::Color::Red);
	objs[4].setSize(sf::Vector2f(50, 50));

	//objIndex = sizeof(objs);
}

void Renderer::render_objs()
{
	int i = 0;
	while (i < objIndex) {
		game.draw(objs[i]);
		i++;
	}
	game.draw(loader.sprites);
}

void Renderer::clean_up()
{
	delete[] objs;
	objIndex = 0;
}