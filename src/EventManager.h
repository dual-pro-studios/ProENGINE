#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
<<<<<<< HEAD
=======
#include "Animation.h"
>>>>>>> 1f90335aab7f72e6bf42ee04522c09451002267c
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
    bool within;
    float time;
	sf::Event evt;
    Animation anims;
    Collision testcol;
};

}