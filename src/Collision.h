#ifndef __ProENGINE_Mac__Collision__
#define __ProENGINE_Mac__Collision__

#include <SFML/Graphics.hpp>
#include "Animation.h"

class Collision {
public:
    bool check_collision(sf::Sprite s1, sf::Sprite s2);
    Collision();
    ~Collision();
};

#endif /* defined(__ProENGINE_Mac__Collision__) */
