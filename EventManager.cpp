#include "EventManager.h"

using namespace lost;

EventManager::EventManager(void)
{
}


EventManager::~EventManager(void)
{
}

void EventManager::process_events(sf::RenderWindow &game)
{
	game.pollEvent(evt);
	if(evt.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
		game.close();
	}
}