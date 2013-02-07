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
    xvel = 0;
    yvel = 0;
	speed = 4;
	
	game.game.pollEvent(evt);

	if(evt.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
		game.game.close();
		game.gameState = game.CLOSED;
	}
    
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Slash)) {
        speed += 3;
    }
    
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Z)) {
        speed -= 3;
    }
    
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
        xvel -= speed;
	}
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
        xvel += speed;
	}
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
        yvel -= speed;
	}
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
        yvel += speed;
	}

	if(sf::Keyboard::isKeyPressed(sf::Keyboard::R)) {
		game.gameView.reset(sf::FloatRect(0, 0, 640, 480));
		game.loader.sprites[0].setPosition(304, 218);
	}

	if(sf::Keyboard::isKeyPressed(sf::Keyboard::LShift)){
		game.gameView.rotate(speed);
	}
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::RShift)) {
		game.gameView.rotate(-speed);
	}
    
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Q)) {
        game.gameView.zoom(1.05);
    }
    
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::E)) {
        game.gameView.zoom(0.9539);
    }
    
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Back)) {
        for(int i = 0; i < 5; i++) {
            game.objs[i].rotate(speed);
        }
        game.loader.sprites[1].rotate(speed);
    }
    
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::V)) {
        game.loader.sprites[1].scale(0.99, 0.99);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::B)) {
        game.loader.sprites[1].scale(1.01, 1.01);
    }
    
    if(testcol.check_collision(game.loader.sprites[0], game.loader.sprites[1])) {
        std::cout << "[EVENTMANAGER]: Collision Detected!\n";
    }
    else {
        std::cout << "[EVENTMANAGER]: No Collision.\n";
    }
    
    game.gameView.move(xvel, yvel);
    game.loader.sprites[0].move(xvel, yvel);
    
}