#include <SFML/Graphics.hpp>
#include <iostream>
#include "Renderer.h"

namespace lost {

class EventManager
{
public:
	EventManager(void);
	void process_events(Renderer& game);
	~EventManager(void);
private:
	sf::Event evt;
};

}