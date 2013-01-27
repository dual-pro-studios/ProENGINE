#include <SFML\Graphics.hpp>

namespace lost {

class Renderer
{
public:
	Renderer(void);
	void create(int width, int height, const std::string title = "Pro Engine");
	void create();
	void render_all();
	~Renderer(void);
	sf::RenderWindow game;
private:
};

}