#include <SFML/Graphics.hpp>
#include <string>

namespace lost {

class ResourceLoader
{
public:
	ResourceLoader(void);
	~ResourceLoader(void);
	void load_all();
	sf::Texture textures;
	sf::Sprite sprites[2];
private:
	std::string tpaths;	
};

}