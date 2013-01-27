#include <SFML\Graphics.hpp>

namespace lost {

class EventManager
{
public:
	EventManager(void);
	void process_events(sf::RenderWindow &game);
	~EventManager(void);
private:
	sf::Event evt;
};

}