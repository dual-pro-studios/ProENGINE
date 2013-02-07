//
//  Collision.cpp
//  ProENGINE-Mac
//
//  Created by Altan Haan on 2/6/13.
//  Copyright (c) 2013 Dual-Pro Studios. All rights reserved.
//

#include "Collision.h"

Collision::Collision()
{
}

Collision::~Collision()
{
}

bool Collision::check_collision(sf::Sprite s1, sf::Sprite s2)
{
    if(s1.getGlobalBounds().intersects(s2.getGlobalBounds())) {
        return true;
    }
    else {
        return false;
    }
}