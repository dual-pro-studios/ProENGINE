#include "EventManager.h"

using namespace lost;
using namespace std;

EventManager::EventManager(void)
{
}


EventManager::~EventManager(void)
{
}

void EventManager::process_events(Renderer& game)
{
	float speed = 3;
	float speed2 = 3;
	
	game.game.pollEvent(evt);

	if(evt.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
		game.game.close();
		game.gameState = game.CLOSED;
	}

	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
		game.gameView.move(-speed, 0);
		game.loader.sprites.move(-speed2, 0);
	}
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
		game.gameView.move(speed, 0);
		game.loader.sprites.move(speed2, 0);
	}
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
		game.gameView.move(0, -speed);
		game.loader.sprites.move(0, -speed2);
	}
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
		game.gameView.move(0, speed);
		game.loader.sprites.move(0, speed2);
	}

	if(sf::Keyboard::isKeyPressed(sf::Keyboard::R)) {
		game.gameView.reset(sf::FloatRect(0, 0, 640, 480));
		game.loader.sprites.setPosition(304, 218);
	}

	if(sf::Keyboard::isKeyPressed(sf::Keyboard::LShift)){
		game.gameView.rotate(speed);
	}
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::RShift)) {
		game.gameView.rotate(-speed);
	}
}