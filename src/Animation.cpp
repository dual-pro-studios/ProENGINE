#include "Animation.h"

using namespace lost;

<<<<<<< HEAD

=======
>>>>>>> 1f90335aab7f72e6bf42ee04522c09451002267c
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
<<<<<<< HEAD
void Animation::animate(sf::Sprite &s_sprite, Renderer &game) // Gets the player sprite from a Renderer
{
    s_anim_speed[0] = 0.15;
    s_anim_speed[1] = 0.30;
    anim_speed[0] = 0.25;
    anim_speed[1] = 0.50;
=======
void Animation::animate(lost::Renderer &game) // Gets the player sprite from a Renderer
{
>>>>>>> 1f90335aab7f72e6bf42ee04522c09451002267c
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
<<<<<<< HEAD
            s_sprite.setTextureRect(sf::IntRect(36, 0, frameSizeX, frameSizeY));
        }
        if(g_dir == RIGHT) {
            s_sprite.setTextureRect(sf::IntRect(0, 28, frameSizeX, frameSizeY));
        }
        if(g_dir == START) {
            s_sprite.setTextureRect(sf::IntRect(36, 0, frameSizeX, frameSizeY));
=======
            game.loader.sprites[0].setTextureRect(sf::IntRect(36, 0, frameSizeX, frameSizeY));
        }
        if(g_dir == RIGHT) {
            game.loader.sprites[0].setTextureRect(sf::IntRect(0, 28, frameSizeX, frameSizeY));
        }
        if(g_dir == START) {
            game.loader.sprites[0].setTextureRect(sf::IntRect(36, 0, frameSizeX, frameSizeY));
>>>>>>> 1f90335aab7f72e6bf42ee04522c09451002267c
        }
    }
    // The actual animation
    if(g_state == ACTIVE) {
<<<<<<< HEAD
        left(s_sprite);
        right(s_sprite);
        up(s_sprite);
        down(s_sprite);
    }
}

void Animation::left(sf::Sprite &s_sprite) {
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
        s_sprite.setTextureRect(sf::IntRect(0, 0, frameSizeX, frameSizeY));
        if(a_time > anim_speed[0]) {
            // Changes the texture rect
            s_sprite.setTextureRect(sf::IntRect(18, 0, frameSizeX, frameSizeY));
            if(a_time > anim_speed[1]) {
=======
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
>>>>>>> 1f90335aab7f72e6bf42ee04522c09451002267c
                a_time = 0; // Resets the timer
                setState(LEFT); //Sets the dir enum to LEFT
            }
        }
    }
    
<<<<<<< HEAD
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left) && sf::Keyboard::isKeyPressed(sf::Keyboard::X)) {
        s_sprite.setTextureRect(sf::IntRect(0, 0, frameSizeX, frameSizeY));
        if(a_time > s_anim_speed[0]) {
            // Changes the texture rect
            s_sprite.setTextureRect(sf::IntRect(18, 0, frameSizeX, frameSizeY));
            if(a_time > s_anim_speed[1]) {
=======
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left) && sf::Keyboard::isKeyPressed(sf::Keyboard::Slash)) {
        game.loader.sprites[0].setTextureRect(sf::IntRect(0, 0, frameSizeX, frameSizeY));
        if(a_time > 0.075) {
            // Changes the texture rect
            game.loader.sprites[0].setTextureRect(sf::IntRect(18, 0, frameSizeX, frameSizeY));
            if(a_time > 0.15) {
>>>>>>> 1f90335aab7f72e6bf42ee04522c09451002267c
                a_time = 0; // Resets the timer
                setState(LEFT); //Sets the dir enum to LEFT
            }
        }
    }
}

<<<<<<< HEAD
void Animation::right(sf::Sprite &s_sprite)
{
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
        s_sprite.setTextureRect(sf::IntRect(16, 28, frameSizeX, frameSizeY));
        if(a_time > anim_speed[0]) {
            s_sprite.setTextureRect(sf::IntRect(36, 28, frameSizeX, frameSizeY));
            if(a_time > anim_speed[1]) {
=======
void Animation::right(Renderer &game)
{
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
        game.loader.sprites[0].setTextureRect(sf::IntRect(16, 28, frameSizeX, frameSizeY));
        if(a_time > 0.15) {
            game.loader.sprites[0].setTextureRect(sf::IntRect(36, 28, frameSizeX, frameSizeY));
            if(a_time > 0.30) {
>>>>>>> 1f90335aab7f72e6bf42ee04522c09451002267c
                setState(RIGHT);
                a_time = 0;
            }
        }
    }
    
<<<<<<< HEAD
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right) && sf::Keyboard::isKeyPressed(sf::Keyboard::X)) {
        s_sprite.setTextureRect(sf::IntRect(16, 28, frameSizeX, frameSizeY));
        if(a_time > s_anim_speed[0]) {
            s_sprite.setTextureRect(sf::IntRect(36, 28, frameSizeX, frameSizeY));
            if(a_time > s_anim_speed[1]) {
=======
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right) && sf::Keyboard::isKeyPressed(sf::Keyboard::Slash)) {
        game.loader.sprites[0].setTextureRect(sf::IntRect(16, 28, frameSizeX, frameSizeY));
        if(a_time > 0.075) {
            game.loader.sprites[0].setTextureRect(sf::IntRect(36, 28, frameSizeX, frameSizeY));
            if(a_time > 0.15) {
>>>>>>> 1f90335aab7f72e6bf42ee04522c09451002267c
                setState(RIGHT);
                a_time = 0;
            }
        }
    }
}

<<<<<<< HEAD
void Animation::up(sf::Sprite &s_sprite) {
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
        if(g_dir == LEFT) {
            s_sprite.setTextureRect(sf::IntRect(0, 0, frameSizeX, frameSizeY));
            if(a_time > anim_speed[0]) {
                // Changes the texture rect
                s_sprite.setTextureRect(sf::IntRect(18, 0, frameSizeX, frameSizeY));
                if(a_time > anim_speed[1]) {
=======
void Animation::up(Renderer &game) {
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
        if(g_dir == LEFT) {
            game.loader.sprites[0].setTextureRect(sf::IntRect(0, 0, frameSizeX, frameSizeY));
            if(a_time > 0.15) {
                // Changes the texture rect
                game.loader.sprites[0].setTextureRect(sf::IntRect(18, 0, frameSizeX, frameSizeY));
                if(a_time > 0.30) {
>>>>>>> 1f90335aab7f72e6bf42ee04522c09451002267c
                    a_time = 0; // Resets the timer
                    setState(LEFT); //Sets the dir enum to LEFT
                }
            }
        }
        else if(g_dir == RIGHT) {
<<<<<<< HEAD
            s_sprite.setTextureRect(sf::IntRect(16, 28, frameSizeX, frameSizeY));
            if(a_time > anim_speed[0]) {
                s_sprite.setTextureRect(sf::IntRect(36, 28, frameSizeX, frameSizeY));
                if(a_time > anim_speed[1]) {
=======
            game.loader.sprites[0].setTextureRect(sf::IntRect(16, 28, frameSizeX, frameSizeY));
            if(a_time > 0.15) {
                game.loader.sprites[0].setTextureRect(sf::IntRect(36, 28, frameSizeX, frameSizeY));
                if(a_time > 0.30) {
>>>>>>> 1f90335aab7f72e6bf42ee04522c09451002267c
                    setState(RIGHT);
                    a_time = 0;
                }
            }
        }
        else {
<<<<<<< HEAD
            s_sprite.setTextureRect(sf::IntRect(0, 0, frameSizeX, frameSizeY));
            if(a_time > anim_speed[0]) {
                // Changes the texture rect
                s_sprite.setTextureRect(sf::IntRect(18, 0, frameSizeX, frameSizeY));
                if(a_time > anim_speed[1]) {
=======
            game.loader.sprites[0].setTextureRect(sf::IntRect(0, 0, frameSizeX, frameSizeY));
            if(a_time > 0.15) {
                // Changes the texture rect
                game.loader.sprites[0].setTextureRect(sf::IntRect(18, 0, frameSizeX, frameSizeY));
                if(a_time > 0.30) {
>>>>>>> 1f90335aab7f72e6bf42ee04522c09451002267c
                    a_time = 0; // Resets the timer
                    setState(LEFT); //Sets the dir enum to LEFT
                }
            }
        }
    }
<<<<<<< HEAD
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && sf::Keyboard::isKeyPressed(sf::Keyboard::X)) {
        if(g_dir == LEFT) {
            s_sprite.setTextureRect(sf::IntRect(0, 0, frameSizeX, frameSizeY));
            if(a_time > s_anim_speed[0]) {
                // Changes the texture rect
                s_sprite.setTextureRect(sf::IntRect(18, 0, frameSizeX, frameSizeY));
                if(a_time > s_anim_speed[1]) {
=======
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && sf::Keyboard::isKeyPressed(sf::Keyboard::Slash)) {
        if(g_dir == LEFT) {
            game.loader.sprites[0].setTextureRect(sf::IntRect(0, 0, frameSizeX, frameSizeY));
            if(a_time > 0.075) {
                // Changes the texture rect
                game.loader.sprites[0].setTextureRect(sf::IntRect(18, 0, frameSizeX, frameSizeY));
                if(a_time > 0.15) {
>>>>>>> 1f90335aab7f72e6bf42ee04522c09451002267c
                    a_time = 0; // Resets the timer
                    setState(LEFT); //Sets the dir enum to LEFT
                }
            }
        }
        else if(g_dir == RIGHT) {
<<<<<<< HEAD
            s_sprite.setTextureRect(sf::IntRect(16, 28, frameSizeX, frameSizeY));
            if(a_time > s_anim_speed[0]) {
                s_sprite.setTextureRect(sf::IntRect(36, 28, frameSizeX, frameSizeY));
                if(a_time > s_anim_speed[1]) {
=======
            game.loader.sprites[0].setTextureRect(sf::IntRect(16, 28, frameSizeX, frameSizeY));
            if(a_time > 0.075) {
                game.loader.sprites[0].setTextureRect(sf::IntRect(36, 28, frameSizeX, frameSizeY));
                if(a_time > 0.15) {
>>>>>>> 1f90335aab7f72e6bf42ee04522c09451002267c
                    setState(RIGHT);
                    a_time = 0;
                }
            }
        }
        else {
<<<<<<< HEAD
            s_sprite.setTextureRect(sf::IntRect(0, 0, frameSizeX, frameSizeY));
            if(a_time > s_anim_speed[0]) {
                // Changes the texture rect
                s_sprite.setTextureRect(sf::IntRect(18, 0, frameSizeX, frameSizeY));
                if(a_time > s_anim_speed[1]) {
=======
            game.loader.sprites[0].setTextureRect(sf::IntRect(0, 0, frameSizeX, frameSizeY));
            if(a_time > 0.075) {
                // Changes the texture rect
                game.loader.sprites[0].setTextureRect(sf::IntRect(18, 0, frameSizeX, frameSizeY));
                if(a_time > 0.15) {
>>>>>>> 1f90335aab7f72e6bf42ee04522c09451002267c
                    a_time = 0; // Resets the timer
                    setState(LEFT); //Sets the dir enum to LEFT
                }
            }
        }
    }
}

<<<<<<< HEAD
void Animation::down(sf::Sprite &s_sprite)
{
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
        if(g_dir == LEFT) {
            s_sprite.setTextureRect(sf::IntRect(0, 0, frameSizeX, frameSizeY));
            if(a_time > anim_speed[0]) {
                // Changes the texture rect
                s_sprite.setTextureRect(sf::IntRect(18, 0, frameSizeX, frameSizeY));
                if(a_time > anim_speed[1]) {
=======
void Animation::down(Renderer &game)
{
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
        if(g_dir == LEFT) {
            game.loader.sprites[0].setTextureRect(sf::IntRect(0, 0, frameSizeX, frameSizeY));
            if(a_time > 0.15) {
                // Changes the texture rect
                game.loader.sprites[0].setTextureRect(sf::IntRect(18, 0, frameSizeX, frameSizeY));
                if(a_time > 0.30) {
>>>>>>> 1f90335aab7f72e6bf42ee04522c09451002267c
                    a_time = 0; // Resets the timer
                    setState(LEFT); //Sets the dir enum to LEFT
                }
            }
        }
        else if(g_dir == RIGHT) {
<<<<<<< HEAD
            s_sprite.setTextureRect(sf::IntRect(16, 28, frameSizeX, frameSizeY));
            if(a_time > anim_speed[0]) {
                s_sprite.setTextureRect(sf::IntRect(36, 28, frameSizeX, frameSizeY));
                if(a_time > anim_speed[1]) {
=======
            game.loader.sprites[0].setTextureRect(sf::IntRect(16, 28, frameSizeX, frameSizeY));
            if(a_time > 0.15) {
                game.loader.sprites[0].setTextureRect(sf::IntRect(36, 28, frameSizeX, frameSizeY));
                if(a_time > 0.30) {
>>>>>>> 1f90335aab7f72e6bf42ee04522c09451002267c
                    setState(RIGHT);
                    a_time = 0;
                }
            }
        }
        else {
<<<<<<< HEAD
            s_sprite.setTextureRect(sf::IntRect(0, 0, frameSizeX, frameSizeY));
            if(a_time > anim_speed[0]) {
                // Changes the texture rect
                s_sprite.setTextureRect(sf::IntRect(18, 0, frameSizeX, frameSizeY));
                if(a_time > anim_speed[1]) {
=======
            game.loader.sprites[0].setTextureRect(sf::IntRect(0, 0, frameSizeX, frameSizeY));
            if(a_time > 0.15) {
                // Changes the texture rect
                game.loader.sprites[0].setTextureRect(sf::IntRect(18, 0, frameSizeX, frameSizeY));
                if(a_time > 0.30) {
>>>>>>> 1f90335aab7f72e6bf42ee04522c09451002267c
                    a_time = 0; // Resets the timer
                    setState(LEFT); //Sets the dir enum to LEFT
                }
            }
        }
    }
    
<<<<<<< HEAD
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down) && sf::Keyboard::isKeyPressed(sf::Keyboard::X)) {
        if(g_dir == LEFT) {
            s_sprite.setTextureRect(sf::IntRect(0, 0, frameSizeX, frameSizeY));
            if(a_time > s_anim_speed[0]) {
                // Changes the texture rect
                s_sprite.setTextureRect(sf::IntRect(18, 0, frameSizeX, frameSizeY));
                if(a_time > s_anim_speed[1]) {
=======
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down) && sf::Keyboard::isKeyPressed(sf::Keyboard::Slash)) {
        if(g_dir == LEFT) {
            game.loader.sprites[0].setTextureRect(sf::IntRect(0, 0, frameSizeX, frameSizeY));
            if(a_time > 0.075) {
                // Changes the texture rect
                game.loader.sprites[0].setTextureRect(sf::IntRect(18, 0, frameSizeX, frameSizeY));
                if(a_time > 0.15) {
>>>>>>> 1f90335aab7f72e6bf42ee04522c09451002267c
                    a_time = 0; // Resets the timer
                    setState(LEFT); //Sets the dir enum to LEFT
                }
            }
        }
        else if(g_dir == RIGHT) {
<<<<<<< HEAD
            s_sprite.setTextureRect(sf::IntRect(16, 28, frameSizeX, frameSizeY));
            if(a_time > s_anim_speed[0]) {
                s_sprite.setTextureRect(sf::IntRect(36, 28, frameSizeX, frameSizeY));
                if(a_time > s_anim_speed[1]) {
=======
            game.loader.sprites[0].setTextureRect(sf::IntRect(16, 28, frameSizeX, frameSizeY));
            if(a_time > 0.075) {
                game.loader.sprites[0].setTextureRect(sf::IntRect(36, 28, frameSizeX, frameSizeY));
                if(a_time > 0.15) {
>>>>>>> 1f90335aab7f72e6bf42ee04522c09451002267c
                    setState(RIGHT);
                    a_time = 0;
                }
            }
        }
        else {
<<<<<<< HEAD
            s_sprite.setTextureRect(sf::IntRect(0, 0, frameSizeX, frameSizeY));
            if(a_time > s_anim_speed[0]) {
                // Changes the texture rect
                s_sprite.setTextureRect(sf::IntRect(18, 0, frameSizeX, frameSizeY));
                if(a_time > s_anim_speed[1]) {
=======
            game.loader.sprites[0].setTextureRect(sf::IntRect(0, 0, frameSizeX, frameSizeY));
            if(a_time > 0.075) {
                // Changes the texture rect
                game.loader.sprites[0].setTextureRect(sf::IntRect(18, 0, frameSizeX, frameSizeY));
                if(a_time > 0.15) {
>>>>>>> 1f90335aab7f72e6bf42ee04522c09451002267c
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