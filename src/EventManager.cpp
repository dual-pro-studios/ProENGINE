#include "EventManager.h"

using namespace lost;
using namespace std;

EventManager::EventManager()
{
}


EventManager::~EventManager(void)
{
}

void EventManager::process_events(Renderer &game)
{
<<<<<<< HEAD
    time = game.getRawFPS();
    TextBox testbox("Hi!");
=======
>>>>>>> 1f90335aab7f72e6bf42ee04522c09451002267c
    anims.setFrameSize(18, 28);
    xvel = 0;
    yvel = 0;
    string userInCMD;
    //float zoom1 = 106;
    //float zoom2 = 9.435;
	speed = 400;
	
    game.game.pollEvent(evt);

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::T)) {
        cout << "Debug cmd prompt invoked!\nPlease Enter a command: ";
        cin >> userInCMD;
        if(userInCMD == "quit") {
              game.close_window();
        }
        else if(userInCMD == "move") {
            if(direction == LEFT) {
                for(int i = 0; i <   game.getFPS(); i++) {
                      game.loader.sprites[0].move(-speed *   game.getRawFPS(), 0);
<<<<<<< HEAD
=======
                      game.gameView.setCenter(game.loader.sprites[0].getPosition().x + 16,   game.loader.sprites[0].getPosition().y + 35);
>>>>>>> 1f90335aab7f72e6bf42ee04522c09451002267c
                      game.setTextPosition(  game.gameView.getCenter().x - 320, game.gameView.getCenter().y - 240);
                      game.render_all();
                }
            }
            if(direction == RIGHT) {
                for(int i = 0; i < 32; i++) {
                      game.loader.sprites[0].move(speed *   game.getRawFPS(), 0);
<<<<<<< HEAD
=======
                      game. gameView.setCenter(  game.loader.sprites[0].getPosition().x + 16,   game.loader.sprites[0].getPosition().y + 35);
>>>>>>> 1f90335aab7f72e6bf42ee04522c09451002267c
                      game.setTextPosition(  game. gameView.getCenter().x - 320,   game. gameView.getCenter().y - 240);
                      game.render_all();
                }
            }
            if(direction == UP) {
                for(int i = 0; i < 32; i++) {
                     game.loader.sprites[0].move(0, -speed *  game.getRawFPS());
<<<<<<< HEAD
=======
                     game. gameView.setCenter( game.loader.sprites[0].getPosition().x + 16,  game.loader.sprites[0].getPosition().y + 35);
>>>>>>> 1f90335aab7f72e6bf42ee04522c09451002267c
                     game.setTextPosition( game. gameView.getCenter().x - 320,  game. gameView.getCenter().y - 240);
                     game.render_all();
                }
            }
            if(direction == DOWN) {
                for(int i = 0; i < 32; i++) {
                     game.loader.sprites[0].move(0, speed *  game.getRawFPS());
<<<<<<< HEAD
=======
                     game. gameView.setCenter( game.loader.sprites[0].getPosition().x + 16,  game.loader.sprites[0].getPosition().y + 35);
>>>>>>> 1f90335aab7f72e6bf42ee04522c09451002267c
                     game.setTextPosition( game. gameView.getCenter().x - 320,  game. gameView.getCenter().y - 240);
                     game.render_all();
                }
            }
        }
        else {
            cout << "Unknow command!\n";
        }
        cout << "\n";
    }
    
    // Quit The  game window
	if(evt.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
		 game.close_window();
	}
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Q) && sf::Keyboard::isKeyPressed(sf::Keyboard::LSystem)) {
         game.close_window();
    }
<<<<<<< HEAD
    
    if(evt.type == sf::Event::Resized) {
        game.game.setSize(sf::Vector2u(game.game.getSize().x, game.game.getSize().y));
    }
    
    // Running/Sneaking (Movement)
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::X)) {
=======
    
    // Running/Sneaking (Movement)
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Slash)) {
>>>>>>> 1f90335aab7f72e6bf42ee04522c09451002267c
        speed += speed/2;
    }
    
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Z)) {
        speed -= speed/2;
    }
    
    // Main/Basic controls
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
        xvel -= speed;
        direction = LEFT;
        anims.setState(anims.LEFT);
	}
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
        xvel += speed;
        direction = RIGHT;
        anims.setState(anims.RIGHT);
	}
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
        yvel -= speed;
        direction = UP;
	}
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
        yvel += speed;
        direction = DOWN;
	}
    
    // Resets Position of Camera and other GUI style stuff
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::R)) {
         game.setSpritePos(304, 218, 0);
<<<<<<< HEAD
         game.gameView.setRotation(0);
		 game.gameView.setCenter( game.loader.sprites[0].getPosition().x + game.loader.sprites[0].getGlobalBounds().width/2,  game.loader.sprites[0].getPosition().y + game.loader.sprites[0].getGlobalBounds().height/2);
=======
        game.gameView.setRotation(0);
		 game. gameView.setCenter( game.loader.sprites[0].getPosition().x + 16,  game.loader.sprites[0].getPosition().y + 35);
>>>>>>> 1f90335aab7f72e6bf42ee04522c09451002267c
         game.setObjPos(0, 0, 5);
         game.setTextPosition(0, 0);
         game.setTextRotation(0);
	}

<<<<<<< HEAD
    /* Rotation
=======
    // Rotation
>>>>>>> 1f90335aab7f72e6bf42ee04522c09451002267c
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::LShift)){
		 game.rotateView(speed *  game.getRawFPS());
        // game.rotateObj(speed *  game.getRawFPS(), 3);
	}
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::RShift)) {
		 game.rotateView(-speed *  game.getRawFPS());
        // game.rotateObj(-speed *  game.getRawFPS(), 3);
<<<<<<< HEAD
	}*/
    
    
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Q)) {
        game.gameView.setSize(game.game.getSize().x * 2, game.game.getSize().y * 2);
        game.setTextSizes(15 * 2);
        game.setTextPosition(0, 0);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
        game.gameView.setSize(game.game.getSize().x, game.game.getSize().y);
        game.setTextSizes(15);
        game.setTextPosition(0, 0);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::E)) {
        game.gameView.setSize(game.game.getSize().x / 2, game.game.getSize().y / 2);
        game.setTextSizes(15 / 2);
        game.setTextPosition(0, 0);
    }
     
    
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num3)) {
        game.game.setVerticalSyncEnabled(false);
        game.setFPSLimit(30);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num4)) {
        game.setFPSLimit(60);
        game.game.setVerticalSyncEnabled(true);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num2)) {
        game.setFPSLimit(5);
        game.game.setVerticalSyncEnabled(false);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num1)) {
        game.game.setVerticalSyncEnabled(false);
        game.setFPSLimit(0);
=======
	}
    
    /*** Zoom function
     *** Has Errors: Does not work with  game.getRawFPS()
     *
     *if(sf::Keyboard::isKeyPressed(sf::Keyboard::Q)) {
     *     game. gameView.zoom(zoom1 *  game.getRawFPS());
     *}
     *if(sf::Keyboard::isKeyPressed(sf::Keyboard::E)) {
     *     game. gameView.zoom(zoom2 *  game.getRawFPS());
     *}
     *
     ***/
    
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num3)) {
         game.setFPSLimit(30);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num4)) {
         game.setFPSLimit(60);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num2)) {
         game.setFPSLimit(5);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num1)) {
         game.setFPSLimit(0);
>>>>>>> 1f90335aab7f72e6bf42ee04522c09451002267c
    }
    
    // Random Rotation Test
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Back)) {
        for(int i = 0; i < 5; i++) {
             game.rotateObj(speed *  game.getRawFPS(), i);
        }
         game.rotateSprite(speed *  game.getRawFPS(), 1);
    }
    
    /***FPS Debug
     ***Key press keeps repeating
     *
     * game. game.setKeyRepeatEnabled(false);
     *if(sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
     *     game.renderFPS();
     *    std::cout << "Spacebar released.\n";
     *}
     * game. game.setKeyRepeatEnabled(true);
     *
     * // Random Global Bounding Box collision test
     *if(sf::Keyboard::isKeyPressed(sf::Keyboard::V)) {
     *     game.setSpriteScale(0.99, 0.99, 1);
     *}
     *if(sf::Keyboard::isKeyPressed(sf::Keyboard::B)) {
     *     game.setSpriteScale(1.01, 1.01, 1);
     *}
     *
     ***/
    
    /*if(testcol.check_collision( game.loader.sprites[0],  game.loader.sprites[1])) {
        //std::cout << "[EVENTMANAGER]: Collision Detected!\n";
        // game.setObjColor(sf::Color(255, 0, 0, 100), 5);
            if( game.loader.sprites[0].getPosition().x <  game.loader.sprites[1].getPosition().x + 32) {
                
                 game.loader.sprites[0].setPosition( game.loader.sprites[1].getPosition().x + 32,  game.loader.sprites[0].getPosition().y);
                
                 game. gameView.setCenter( game.loader.sprites[0].getPosition().x + 16,  game.loader.sprites[0].getPosition().y + 35);
                 game.objs[5].setPosition( game. gameView.getCenter().x - 320,  game. gameView.getCenter().y - 240);
            }
            if( game.loader.sprites[0].getPosition().x + 32 >  game.loader.sprites[1].getPosition().x &&  game.loader.sprites[0].getPosition().x + 32 <  game.loader.sprites[1].getPosition().x + 32) {
                
                 game.loader.sprites[0].setPosition( game.loader.sprites[1].getPosition().x,  game.loader.sprites[0].getPosition().y);
                
                 game. gameView.setCenter( game.loader.sprites[0].getPosition().x + 16,  game.loader.sprites[0].getPosition().y + 35);
                 game.objs[5].setPosition( game. gameView.getCenter().x - 320,  game. gameView.getCenter().y - 240);
            }
        if(direction == DOWN) {
            if( game.loader.sprites[0].getPosition().y <  game.loader.sprites[1].getPosition().x + 32) {
                
                 game.loader.sprites[0].setPosition( game.loader.sprites[0].getPosition().x,  game.loader.sprites[1].getGlobalBounds().height / 2.5);
                
                 game. gameView.setCenter( game.loader.sprites[0].getPosition().x + 16,  game.loader.sprites[0].getPosition().y + 35);
                 game.objs[5].setPosition( game. gameView.getCenter().x - 320,  game. gameView.getCenter().y - 240);
            }
        }
        
        if(direction == UP) {
            if( game.loader.sprites[0].getPosition().y <  game.loader.sprites[1].getPosition().x + 32) {
                
                 game.loader.sprites[0].setPosition( game.loader.sprites[0].getPosition().x,  game.loader.sprites[1].getGlobalBounds().height * 2.5);
                
                 game. gameView.setCenter( game.loader.sprites[0].getPosition().x + 16,  game.loader.sprites[0].getPosition().y + 35);
                 game.objs[5].setPosition( game. gameView.getCenter().x - 320,  game. gameView.getCenter().y - 240);
            }
        }
        
    }
    else {
        //std::cout << "[EVENTMANAGER]: No Collision.\n";
         game.setObjColor(sf::Color(255, 0, 0, 0), 5);
    }*/
<<<<<<< HEAD
    
    
    
    // Apply the movement
    if(game.loader.sprites[0].getPosition().x > game.gameView.getCenter().x + 220) {
        game.gameView.move(speed * game.getRawFPS(), 0);
    }
    if(game.loader.sprites[0].getPosition().x < game.gameView.getCenter().x - 260) {
        game.gameView.move(-speed * game.getRawFPS(), 0);
    }
    if(game.loader.sprites[0].getPosition().y > game.gameView.getCenter().y + 120) {
        game.gameView.move(0, speed * game.getRawFPS());
    }
    if(game.loader.sprites[0].getPosition().y < game.gameView.getCenter().y - 180) {
        game.gameView.move(0, -speed * game.getRawFPS());
    }
    game.loader.sprites[0].move(xvel *  game.getRawFPS(), yvel *  game.getRawFPS());
    game.setTextPosition( game. gameView.getCenter().x - game.gameView.getSize().x/2,  game. gameView.getCenter().y - game.gameView.getSize().y/2);
    game.objs[5].move(xvel *  game.getRawFPS(), yvel *  game.getRawFPS());
    anims.animate(game.loader.sprites[0], game);
    anims.animate(game.loader.sprites[1], game);
    if(testcol.check_collision(game.loader.sprites[0], game.loader.sprites[1])) {
        testbox.show(game);
    }
    testbox.show(game);
=======
    
    // Apply the movement
    game. gameView.move(xvel *  game.getRawFPS(), yvel *  game.getRawFPS());
    game.loader.sprites[0].move(xvel *  game.getRawFPS(), yvel *  game.getRawFPS());
    game.setTextPosition( game. gameView.getCenter().x - 320,  game. gameView.getCenter().y - 240);
    game.objs[5].move(xvel *  game.getRawFPS(), yvel *  game.getRawFPS());
    anims.animate(game);
>>>>>>> 1f90335aab7f72e6bf42ee04522c09451002267c
}