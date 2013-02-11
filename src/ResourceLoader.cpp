#include "ResourceLoader.h"

using namespace lost;

ResourceLoader::ResourceLoader(void)
{
}


ResourceLoader::~ResourceLoader(void)
{
}

void ResourceLoader::load_all()
{
	tpaths = "mario.png";
    t_image.loadFromFile(tpaths);
    t_image.createMaskFromColor(sf::Color::White);
	textures.loadFromImage(t_image);
    sprites[0].setTexture(textures);
	sprites[1].setTexture(textures);
}
