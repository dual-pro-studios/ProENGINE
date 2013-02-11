#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include "Animation.h"
#include "Collision.h"

namespace lost {

class EventManager
{
public:
	EventManager();
    enum moveDirection {LEFT, RIGHT, UP, DOWN};
    moveDirection direction;
    moveDirection x_direction;
	void process_events(Renderer &game);
	~EventManager(void);
    float xvel;
    float yvel;
    float speed;
private:
	sf::Event evt;
    Animation anims;
    Collision testcol;
};

}