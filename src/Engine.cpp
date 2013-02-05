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
	engine.start("engine.dbg", true);
	engine.print("Engine is starting...\n");
	rendere.create();
	setVersion("2013");
	//loader.load_all();
	rendere.createRect();
	gameLoop();
}

void Engine::start(int width, int height)
{
	engine.start("engine.dbg", true);
	engine.print("Engine is starting...\n");
	rendere.create(width, height, "ProENGINE");
	setVersion("2");
	//loader.load_all();
	rendere.createRect();
	gameLoop();
}

void Engine::gameLoop()
{
	while(rendere.gameState == rendere.OPEN) {
		rendere.render_all();
		manager.process_events(rendere);
	}
	if(rendere.gameState == rendere.CLOSED) {
		engine.print("Game loop has exited!\n");
		rendere.clean_up();
		engine.stop();
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