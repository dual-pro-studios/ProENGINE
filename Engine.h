#include "ResourceLoader.h"
#include "EventManager.h"
#include "Renderer.h"
#include "Debug.h"

namespace lost {

class Engine
{
public:
	Engine(void);
	~Engine(void);
	void start();
	void start(int width, int height);
	void setVersion(const std::string verNum);
	const std::string getVersion();
private:
	void gameLoop();
	std::string versionNum;
	ResourceLoader loader;
	EventManager manager;
	Renderer rendere;
};

}