#include "Animation.h"

using namespace lost;

//Default constructor
Animation::Animation()
{
    setState(START);
}

Animation::~Animation()
{
    
}

// Sets the frame size
void Animation::setFrameSize(int width, int height)
{
    frameSizeX = width; //Frame Width
    frameSizeY = height; //Frame Height
}

// The actual animation is done within this function
void Animation::animate(lost::Renderer &game) // Gets the player sprite from a Renderer
{
    // Timer
    a_time += game.getRawFPS();
    // INACTIVE STATE detectiong
    if(!sf::Keyboard::isKeyPressed(sf::Keyboard::Left) && !sf::Keyboard::isKeyPressed(sf::Keyboard::Right) && !sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && !sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
        g_state = INACTIVE; //Sets the enumeration to INACTIVE
    }
    else { // Else: Set the enum to ACTIVE
        g_state = ACTIVE; 
    }
    if(g_state == INACTIVE) {
        // Determines which direction the player stopped in and sets the idle texture relative to that direction
        if(g_dir == LEFT) {
            game.loader.sprites[0].setTextureRect(sf::IntRect(36, 0, frameSizeX, frameSizeY));
        }
        if(g_dir == RIGHT) {
            game.loader.sprites[0].setTextureRect(sf::IntRect(0, 28, frameSizeX, frameSizeY));
        }
        if(g_dir == START) {
            game.loader.sprites[0].setTextureRect(sf::IntRect(36, 0, frameSizeX, frameSizeY));
        }
    }
    // The actual animation
    if(g_state == ACTIVE) {
        left(game);
        right(game);
        up(game);
        down(game);
    }
}

void Animation::left(Renderer &game) {
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
        game.loader.sprites[0].setTextureRect(sf::IntRect(0, 0, frameSizeX, frameSizeY));
        if(a_time > 0.15) {
            // Changes the texture rect
            game.loader.sprites[0].setTextureRect(sf::IntRect(18, 0, frameSizeX, frameSizeY));
            if(a_time > 0.30) {
                a_time = 0; // Resets the timer
                setState(LEFT); //Sets the dir enum to LEFT
            }
        }
    }
    
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left) && sf::Keyboard::isKeyPressed(sf::Keyboard::Slash)) {
        game.loader.sprites[0].setTextureRect(sf::IntRect(0, 0, frameSizeX, frameSizeY));
        if(a_time > 0.075) {
            // Changes the texture rect
            game.loader.sprites[0].setTextureRect(sf::IntRect(18, 0, frameSizeX, frameSizeY));
            if(a_time > 0.15) {
                a_time = 0; // Resets the timer
                setState(LEFT); //Sets the dir enum to LEFT
            }
        }
    }
}

void Animation::right(Renderer &game)
{
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
        game.loader.sprites[0].setTextureRect(sf::IntRect(16, 28, frameSizeX, frameSizeY));
        if(a_time > 0.15) {
            game.loader.sprites[0].setTextureRect(sf::IntRect(36, 28, frameSizeX, frameSizeY));
            if(a_time > 0.30) {
                setState(RIGHT);
                a_time = 0;
            }
        }
    }
    
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right) && sf::Keyboard::isKeyPressed(sf::Keyboard::Slash)) {
        game.loader.sprites[0].setTextureRect(sf::IntRect(16, 28, frameSizeX, frameSizeY));
        if(a_time > 0.075) {
            game.loader.sprites[0].setTextureRect(sf::IntRect(36, 28, frameSizeX, frameSizeY));
            if(a_time > 0.15) {
                setState(RIGHT);
                a_time = 0;
            }
        }
    }
}

void Animation::up(Renderer &game) {
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
        if(g_dir == LEFT) {
            game.loader.sprites[0].setTextureRect(sf::IntRect(0, 0, frameSizeX, frameSizeY));
            if(a_time > 0.15) {
                // Changes the texture rect
                game.loader.sprites[0].setTextureRect(sf::IntRect(18, 0, frameSizeX, frameSizeY));
                if(a_time > 0.30) {
                    a_time = 0; // Resets the timer
                    setState(LEFT); //Sets the dir enum to LEFT
                }
            }
        }
        else if(g_dir == RIGHT) {
            game.loader.sprites[0].setTextureRect(sf::IntRect(16, 28, frameSizeX, frameSizeY));
            if(a_time > 0.15) {
                game.loader.sprites[0].setTextureRect(sf::IntRect(36, 28, frameSizeX, frameSizeY));
                if(a_time > 0.30) {
                    setState(RIGHT);
                    a_time = 0;
                }
            }
        }
        else {
            game.loader.sprites[0].setTextureRect(sf::IntRect(0, 0, frameSizeX, frameSizeY));
            if(a_time > 0.15) {
                // Changes the texture rect
                game.loader.sprites[0].setTextureRect(sf::IntRect(18, 0, frameSizeX, frameSizeY));
                if(a_time > 0.30) {
                    a_time = 0; // Resets the timer
                    setState(LEFT); //Sets the dir enum to LEFT
                }
            }
        }
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && sf::Keyboard::isKeyPressed(sf::Keyboard::Slash)) {
        if(g_dir == LEFT) {
            game.loader.sprites[0].setTextureRect(sf::IntRect(0, 0, frameSizeX, frameSizeY));
            if(a_time > 0.075) {
                // Changes the texture rect
                game.loader.sprites[0].setTextureRect(sf::IntRect(18, 0, frameSizeX, frameSizeY));
                if(a_time > 0.15) {
                    a_time = 0; // Resets the timer
                    setState(LEFT); //Sets the dir enum to LEFT
                }
            }
        }
        else if(g_dir == RIGHT) {
            game.loader.sprites[0].setTextureRect(sf::IntRect(16, 28, frameSizeX, frameSizeY));
            if(a_time > 0.075) {
                game.loader.sprites[0].setTextureRect(sf::IntRect(36, 28, frameSizeX, frameSizeY));
                if(a_time > 0.15) {
                    setState(RIGHT);
                    a_time = 0;
                }
            }
        }
        else {
            game.loader.sprites[0].setTextureRect(sf::IntRect(0, 0, frameSizeX, frameSizeY));
            if(a_time > 0.075) {
                // Changes the texture rect
                game.loader.sprites[0].setTextureRect(sf::IntRect(18, 0, frameSizeX, frameSizeY));
                if(a_time > 0.15) {
                    a_time = 0; // Resets the timer
                    setState(LEFT); //Sets the dir enum to LEFT
                }
            }
        }
    }
}

void Animation::down(Renderer &game)
{
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
        if(g_dir == LEFT) {
            game.loader.sprites[0].setTextureRect(sf::IntRect(0, 0, frameSizeX, frameSizeY));
            if(a_time > 0.15) {
                // Changes the texture rect
                game.loader.sprites[0].setTextureRect(sf::IntRect(18, 0, frameSizeX, frameSizeY));
                if(a_time > 0.30) {
                    a_time = 0; // Resets the timer
                    setState(LEFT); //Sets the dir enum to LEFT
                }
            }
        }
        else if(g_dir == RIGHT) {
            game.loader.sprites[0].setTextureRect(sf::IntRect(16, 28, frameSizeX, frameSizeY));
            if(a_time > 0.15) {
                game.loader.sprites[0].setTextureRect(sf::IntRect(36, 28, frameSizeX, frameSizeY));
                if(a_time > 0.30) {
                    setState(RIGHT);
                    a_time = 0;
                }
            }
        }
        else {
            game.loader.sprites[0].setTextureRect(sf::IntRect(0, 0, frameSizeX, frameSizeY));
            if(a_time > 0.15) {
                // Changes the texture rect
                game.loader.sprites[0].setTextureRect(sf::IntRect(18, 0, frameSizeX, frameSizeY));
                if(a_time > 0.30) {
                    a_time = 0; // Resets the timer
                    setState(LEFT); //Sets the dir enum to LEFT
                }
            }
        }
    }
    
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down) && sf::Keyboard::isKeyPressed(sf::Keyboard::Slash)) {
        if(g_dir == LEFT) {
            game.loader.sprites[0].setTextureRect(sf::IntRect(0, 0, frameSizeX, frameSizeY));
            if(a_time > 0.075) {
                // Changes the texture rect
                game.loader.sprites[0].setTextureRect(sf::IntRect(18, 0, frameSizeX, frameSizeY));
                if(a_time > 0.15) {
                    a_time = 0; // Resets the timer
                    setState(LEFT); //Sets the dir enum to LEFT
                }
            }
        }
        else if(g_dir == RIGHT) {
            game.loader.sprites[0].setTextureRect(sf::IntRect(16, 28, frameSizeX, frameSizeY));
            if(a_time > 0.075) {
                game.loader.sprites[0].setTextureRect(sf::IntRect(36, 28, frameSizeX, frameSizeY));
                if(a_time > 0.15) {
                    setState(RIGHT);
                    a_time = 0;
                }
            }
        }
        else {
            game.loader.sprites[0].setTextureRect(sf::IntRect(0, 0, frameSizeX, frameSizeY));
            if(a_time > 0.075) {
                // Changes the texture rect
                game.loader.sprites[0].setTextureRect(sf::IntRect(18, 0, frameSizeX, frameSizeY));
                if(a_time > 0.15) {
                    a_time = 0; // Resets the timer
                    setState(LEFT); //Sets the dir enum to LEFT
                }
            }
        }
    }
}

// Might not be needed
void Animation::setSprite(sf::Sprite &sourceSprite)
{
}

// Used to set the state
void Animation::setState(x_dir dir) {
    g_dir = dir;
}