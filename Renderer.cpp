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
	game.display();
}

void Renderer::create(int width, int height, const std::string title)
{
	game.create(sf::VideoMode(width, height), title);
}

void Renderer::create()
{
	game.create(sf::VideoMode(640, 480), "Pro Engine");
}