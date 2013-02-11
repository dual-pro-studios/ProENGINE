#include <SFML/Graphics.hpp>
#include "Renderer.h"

namespace lost {
    
class Animation {
public:
    Animation();
    ~Animation();
    enum state {ACTIVE, INACTIVE};
    enum x_dir {LEFT, RIGHT, START};
    void setSprite(sf::Sprite &sourceSprite);
    void setState(state c_state);
    void setState(x_dir dir);
    void setFrameSize(int width, int height);
    void animate(lost::Renderer &game);
private:
    void left(Renderer &game);
    void right(Renderer &game);
    void down(Renderer &game);
    void up(Renderer &game);
    int frameSizeX;
    int frameSizeY;
    int frameNumX;
    int frameNumY;
    float a_time;
    float currentPosX;
    float currentPosY;
    state g_state;
    x_dir g_dir;
};

}