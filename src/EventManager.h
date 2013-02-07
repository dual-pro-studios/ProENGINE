#include <SFML/Graphics.hpp>
#include <iostream>
#include "Renderer.h"
#include "Collision.h"

namespace lost {

class EventManager
{
public:
	EventManager(void);
	void process_events(Renderer& game);
	~EventManager(void);
    float xvel;
    float yvel;
    float speed;
private:
	sf::Event evt;
    Collision testcol;
};

}