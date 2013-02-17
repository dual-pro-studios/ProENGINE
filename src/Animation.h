#include <SFML/Graphics.hpp>
<<<<<<< HEAD
#include "TextBox.h"
=======
#include "Renderer.h"
>>>>>>> 1f90335aab7f72e6bf42ee04522c09451002267c

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
<<<<<<< HEAD
    void animate(sf::Sprite &s_sprite, Renderer &game);
private:
    void left(sf::Sprite &s_sprite);
    void right(sf::Sprite &s_sprite);
    void down(sf::Sprite &s_sprite);
    void up(sf::Sprite &s_sprite);
=======
    void animate(lost::Renderer &game);
private:
    void left(Renderer &game);
    void right(Renderer &game);
    void down(Renderer &game);
    void up(Renderer &game);
>>>>>>> 1f90335aab7f72e6bf42ee04522c09451002267c
    int frameSizeX;
    int frameSizeY;
    int frameNumX;
    int frameNumY;
    float a_time;
    float currentPosX;
    float currentPosY;
<<<<<<< HEAD
    float anim_speed[2];
    float s_anim_speed[2];
=======
>>>>>>> 1f90335aab7f72e6bf42ee04522c09451002267c
    state g_state;
    x_dir g_dir;
};

}