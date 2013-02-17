#include "Renderer.h"

using namespace lost;

Renderer::Renderer(void)
{
}


Renderer::~Renderer(void)
{
}

void Renderer::render_all()
{
    std::stringstream ss;
    std::stringstream ss2;
    std::stringstream ss3;
    sf::Clock fclock;
    sf::Time ftime;
	game.clear();
	game.setView(gameView);
	render_objs();
	game.display();
    ftime = fclock.restart();
    fps =  1.f / ftime.asSeconds();
    rawFPS = ftime.asSeconds();
    ss << fps;
    fpsString = ss.str();
    float posX = loader.sprites[0].getPosition().x;
    float posY = loader.sprites[0].getPosition().y;
    ss3 << posX;
    ss2 << posY;
    std::string px;
    std::string py;
    px = ss3.str();
    py = ss2.str();
    fpsTXT.setString("FPS: " + fpsString);
    posTXT.setString("POS: " + px + ", " + py);
    if(fps > 61) {
        fpsTXT.setColor(sf::Color::Green);
    }
    else if(fps <= 61 && fps > 50) {
        fpsTXT.setColor(sf::Color::Yellow);
    }
    else if(fps < 50 && fps > 28) {
        fpsTXT.setColor(sf::Color(255, 125, 125));
    }
    else {
        fpsTXT.setColor(sf::Color::Red);
    }
}

void Renderer::create(int width, int height, const std::string title)
{
	loader.load_all();
    l_loader.load("level.txt");
	game.create(sf::VideoMode(width, height), title , sf::Style::Fullscreen);
	gameView.reset(sf::FloatRect(0, 0, width, height));
	game.setView(gameView);
	game.setFramerateLimit(60);
    fpsTXT.setString("Test String!");
    fpsTXT.setColor(sf::Color::Yellow);
    fpsTXT.setCharacterSize(15);
    fpsTXT.setStyle(sf::Text::Style::Bold);
    posTXT.setPosition(0, 15);
    posTXT.setColor(sf::Color::Red);
    posTXT.setCharacterSize(15);
    posTXT.setStyle(sf::Text::Style::Bold);
	gameState = OPEN;
    renderFPSb = true;
	objIndex = 0;
}

void Renderer::create()
{
	game.create(sf::VideoMode(640, 480), "ProENGINE");
	game.setFramerateLimit(60);
	gameState = OPEN;
	objIndex = 0;
}

void Renderer::createRect()
{
	objIndex =  6;
	loader.sprites[0].setPosition(304, 218);
	loader.sprites[0].setColor(sf::Color::Color(255, 255, 255, 255));
    loader.sprites[0].setScale(2, 2);
    loader.sprites[1].setPosition(200, 100);
    loader.sprites[1].setColor(sf::Color::Color(134, 200, 233, 200));
    loader.sprites[1].setScale(2, 2);
    loader.sprites[1].setPosition(loader.sprites[0].getPosition().x, loader.sprites[0].getPosition().y);
	objs = new sf::RectangleShape[objIndex];
	objs[0].setPosition(0, 0);
	objs[0].setFillColor(sf::Color::Magenta);
	objs[0].setSize(sf::Vector2f(32, 32));
	objs[1].setPosition(32,0);
	objs[1].setFillColor(sf::Color::Green);
	objs[1].setSize(sf::Vector2f(32, 32));
    objs[2].setPosition(96,32);
	objs[2].setFillColor(sf::Color::Blue);
	objs[2].setSize(sf::Vector2f(100, 50));
    objs[5].setPosition(0, 0);
    objs[5].setSize(sf::Vector2f(640, 480));
    objs[5].setFillColor(sf::Color(255, 0, 0, 0));
	objs[4].setPosition(300, 245);
	objs[4].setFillColor(sf::Color::Red);
	objs[4].setSize(sf::Vector2f(50, 50));
<<<<<<< HEAD
    gameView.setCenter(loader.sprites[0].getPosition().x + loader.sprites[0].getLocalBounds().width/2, loader.sprites[0].getPosition().y + loader.sprites[0].getLocalBounds().height/2);
=======
    gameView.setCenter(loader.sprites[0].getPosition().x + 16, loader.sprites[0].getPosition().y + 35);
	//objIndex = sizeof(objs);
>>>>>>> 1f90335aab7f72e6bf42ee04522c09451002267c
}

void Renderer::render_objs()
{
    l_loader.render(game, gameView);
	/*int i = 0;
	while (i < objIndex) {
		game.draw(objs[i]);
		i++;
	}*/
	game.draw(loader.sprites[0]);
    game.draw(loader.sprites[1]);
    game.draw(fpsTXT);
    game.draw(posTXT);
<<<<<<< HEAD
    //game.draw(objs[5]);
=======
    game.draw(objs[5]);
>>>>>>> 1f90335aab7f72e6bf42ee04522c09451002267c
}

void Renderer::clean_up()
{
	delete[] objs;
	objIndex = 0;
}

float Renderer::getFPS()
{
    return fps;
}

void Renderer::moveText(float velx, float vely)
{
    fpsTXT.move(velx, vely);
    posTXT.move(velx, vely);
}

void Renderer::rotateText(float degree)
{
    fpsTXT.rotate(degree);
    posTXT.rotate(degree);
}

void Renderer::setTextPosition(float x, float y)
{
    fpsTXT.setPosition(x, y);
<<<<<<< HEAD
    posTXT.setPosition(x, y + getTextSize());
=======
    posTXT.setPosition(x, y + 20);
>>>>>>> 1f90335aab7f72e6bf42ee04522c09451002267c
}

void Renderer::setTextRotation(float degree)
{
    fpsTXT.setRotation(degree);
    posTXT.setRotation(degree);
}

void Renderer::setTextSize(sf::Vector2f size)
{
    fpsTXT.setScale(size);
    posTXT.setScale(size);
}

void Renderer::setTextSize(float width, float height)
{
    fpsTXT.setScale(width, height);
    posTXT.setScale(width, height);
}

<<<<<<< HEAD
void Renderer::setTextSizes(unsigned int size)
{
    fpsTXT.setCharacterSize(size);
    posTXT.setCharacterSize(size);
}

=======
>>>>>>> 1f90335aab7f72e6bf42ee04522c09451002267c
void Renderer::renderFPS()
{
    renderFPSb = !renderFPSb;
}

void Renderer::setSpriteScale(float xfactor, float yfactor, int spriteIndex)
{
    loader.sprites[spriteIndex].scale(xfactor, yfactor);
}

void Renderer::setFPSLimit(unsigned int fps)
{
    game.setFramerateLimit(fps);
}

void Renderer::rotateSprite(float degree, int spriteIndex)
{
    loader.sprites[spriteIndex].rotate(degree);
}

void Renderer::rotateObj(float degree, int objIndex)
{
    objs[objIndex].rotate(degree);
}

float Renderer::getRawFPS()
{
    return rawFPS;
}

void Renderer::rotateView(float degree)
{
    gameView.rotate(degree);
}

void Renderer::setObjColor(sf::Color color, int objsIndex)
{
    objs[objsIndex].setFillColor(color);
}

void Renderer::setObjPos(float x, float y, int objsIndex)
{
    objs[objsIndex].setPosition(x, y);
}

void Renderer::setSpritePos(float x, float y, int spriteIndex)
{
    loader.sprites[spriteIndex].setPosition(x, y);
}

void Renderer::close_window()
{
    game.close();
    setGameState(CLOSED);
}

void Renderer::setGameState(windowState gamestate)
{
    gameState = gamestate;
}

sf::Sprite Renderer::getPlayerSprite()
{
    return loader.sprites[0];
<<<<<<< HEAD
}

unsigned int Renderer::getTextSize() {
    return fpsTXT.getGlobalBounds().height;
=======
>>>>>>> 1f90335aab7f72e6bf42ee04522c09451002267c
}