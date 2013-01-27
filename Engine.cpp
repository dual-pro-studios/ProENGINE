#include "Engine.h"

using namespace lost;

Engine::Engine(void)
{
}


Engine::~Engine(void)
{
}

void Engine::start()
{
	rendere.create();
	loader.load_all();
	gameLoop();
}

void Engine::start(int width, int height)
{
	rendere.create(width, height, "Pro Engine");
	setVersion("1.27");
	loader.load_all();
	gameLoop();
}

void Engine::gameLoop()
{
	while(rendere.game.isOpen()) {
		manager.process_events(rendere.game);
		rendere.render_all();
	}
}

void Engine::setVersion(std::string verNum)
{
	versionNum = verNum;
	rendere.game.setTitle("ProENGINE " + versionNum);
}

const std::string Engine::getVersion()
{
	return versionNum;
}