#include <SFML/Graphics.hpp>
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
	void clean_up();
	~Renderer(void);
	sf::RenderWindow game;
	ResourceLoader loader;
	sf::View gameView;
	sf::RectangleShape* objs;
private:
	int objIndex;
};

}