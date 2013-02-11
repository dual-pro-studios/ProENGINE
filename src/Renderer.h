#include <SFML/Graphics.hpp>
#include <string>
#include <sstream>
#include "ResourceLoader.h"

namespace lost {

class Renderer
{
public:
	Renderer(void);
	enum windowState {OPEN, CLOSED};
	windowState gameState;
	void create(int width, int height, const std::string title = "Pro Engine");
	void create();
	void createRect();
	void render_all();
	void render_objs();
    //void render_obj(Object &obj);
    sf::Sprite getPlayerSprite();
    void close_window();
	void clean_up();
    void renderFPS();
    void setFPSLimit(unsigned int fps);
    void setGameState(windowState gamestate);
    void rotateView(float degree);
    void rotateObj(float degree, int objIndex);
    void setObjPos(float x, float y, int objsIndex);
    void setObjColor(sf::Color color, int objIndex);
    void rotateSprite(float degree, int spriteIndex);
    void setSpritePos(float x, float y, int spriteIndex);
    void setSpriteScale(float xfactor, float yfactor, int spriteIndex);
    void setTextSize(sf::Vector2f size);
    void setTextSize(float width, float height);
    void setTextPosition(float x, float y);
    void setTextRotation(float degree);
    void rotateText(float degree);
    void moveText(float velx, float vely);
    float getFPS();
    float getRawFPS();
	~Renderer(void);
	sf::RenderWindow game;
	ResourceLoader loader;
	sf::View gameView;
	sf::RectangleShape* objs;
private:
	int objIndex;
    float fps;
    float rawFPS;
    bool renderFPSb;
    std::string fpsString;
    sf::Text fpsTXT;
    sf::Text posTXT;
};

}