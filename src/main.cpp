#include "Engine.h"
#include <iostream>
#include <string>
#include <SFML/Audio.hpp>

using namespace std;

int main(int argc, char* argv[]) {
    lost::Debug md;
    md.start("main.dbg", true);
    md.print("Initializing start music...\n");
    sf::Music smb;
    smb.openFromFile("mario.ogg");
    md.print("Music initiated!\n");
    md.print("Setting up splashscreen...\n");
    sf::RenderWindow ss(sf::VideoMode(640, 480), "Splash Screen", sf::Style::None);
    sf::Texture sst;
    sst.loadFromFile("splash.png");
    sf::Sprite sss;
    sss.setTexture(sst);
    sss.setPosition(0, -15);
    ss.clear();
    ss.draw(sss);
    ss.display();
    md.print("Splashscreen loaded and displayed!\n");
    md.print("Sleeping for 2 seconds.\n");
    smb.play();
    sleep(2);
<<<<<<< HEAD
    if(smb.Playing) {
    ss.close();
    smb.stop();
    }
=======
    ss.close();
    smb.stop();
>>>>>>> 1f90335aab7f72e6bf42ee04522c09451002267c
    md.print("Splashscreen closed!\n");
    md.print("Playing start music...\n");
    md.print("Start music playing!\n");
    md.print("Initializing engine...\n");
	lost::Engine lsengine;
    md.print("Engine created!\n");
<<<<<<< HEAD
	lsengine.start(1280, 800);
=======
	lsengine.start(640, 480);
>>>>>>> 1f90335aab7f72e6bf42ee04522c09451002267c
    md.print("Engine has closed!\n");

	return 0;
}