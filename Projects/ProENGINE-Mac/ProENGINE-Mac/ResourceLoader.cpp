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
	tpaths = "player.png";
	textures.loadFromFile(tpaths);
	sprites.setTexture(textures);
}
