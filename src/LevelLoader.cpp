#include "LevelLoader.h"

using namespace std;

LevelLoader::LevelLoader()
{
    
}

LevelLoader::~LevelLoader()
{
    
}

// Load the level
void LevelLoader::load(const char *filename)
{
    int currentTileX = 0, currentTileY = 0;
    string* t_texture;
    std::string mapname;
    // Create the ifstream object & open it
    ifstream map_f(filename);
    if(!map_f.is_open()) {
        printf("[ERROR]: Could not open %s!", filename);
        return;
    }
    // Get the essential info from the file
    map_f >> width;
    cerr << width << "\n";
    map_f >> height;
    cerr << height << "\n";
    map_f >> textures_n;
    map_f >> tilesize;
    textures = new sf::Texture[textures_n];
    t_texture = new string[textures_n];
    map_f >> mapname;
    int tempInt = 0;
    while(!map_f.eof()) {
        map_f >> t_texture[tempInt];
        tempInt++;
    }
    tempInt = 0;
    while(tempInt < textures_n) {
        textures[tempInt].loadFromFile(t_texture[tempInt]);
        tempInt++;
    }
    sprites = new sf::Sprite[textures_n];
    tempInt = 0;
    while(tempInt < sizeof(textures)) {
        sprites[tempInt].setTexture(textures[tempInt]);
        tempInt++;
    }
    ifstream map(mapname.c_str());
    while(!map.eof()) {
        map >> map_t[currentTileX][currentTileY].ID;
        currentTileX++;
        if(currentTileX >= width) {
            currentTileX = 0;
            currentTileY++;
        }
    }
}

void LevelLoader::render(sf::RenderWindow &window, sf::View view)
{
    sf::Texture errtexture;
    errtexture.loadFromFile("error.png");
    sf::Sprite errsprite;
    errsprite.setTexture(errtexture);
    for(int i = 0; i < width; i++) {
        for(int j = 0; j < height; j++) {
            if(map_t[i][j].getX() < view.getCenter().x + view.getSize().x/2 && map_t[i][j].getX() + tilesize > view.getCenter().x - view.getSize().x/2 && map_t[i][j].getY() < view.getCenter().y + view.getSize().y/2 && map_t[i][j].getY() + tilesize > view.getCenter().y - view.getSize().y/2) {
                int tempInt = 0;
                if(map_t[i][j].ID == 1) {
                    map_t[i][j].setSprite(sprites[tempInt]);
                    map_t[i][j].setPosition(i * tilesize, j * tilesize);
                }
                tempInt++;
                if(map_t[i][j].ID == 2) {
                    map_t[i][j].setSprite(sprites[tempInt]);
                    map_t[i][j].setPosition(i * tilesize, j * tilesize);
                }
                tempInt++;
                if(map_t[i][j].ID == 3) {
                    map_t[i][j].setSprite(sprites[tempInt]);
                    map_t[i][j].setPosition(i * tilesize, j * tilesize);
                }
                tempInt++;
                if(map_t[i][j].ID == 4) {
                    map_t[i][j].setSprite(sprites[tempInt]);
                    map_t[i][j].setPosition(i * tilesize, j * tilesize);
                }
                tempInt++;
                if(map_t[i][j].ID == 5) {
                    map_t[i][j].setSprite(sprites[tempInt]);
                    map_t[i][j].setPosition(i * tilesize, j * tilesize);
                }
                tempInt++;
                if(map_t[i][j].ID == 6) {
                    map_t[i][j].setSprite(sprites[tempInt]);
                    map_t[i][j].setPosition(i * tilesize, j * tilesize);
                }
                tempInt++;
                if(map_t[i][j].ID == 7) {
                    map_t[i][j].setSprite(sprites[tempInt]);
                    map_t[i][j].setPosition(i * tilesize, j * tilesize);
                }
                tempInt++;
                if(map_t[i][j].ID == 8) {
                    map_t[i][j].setSprite(sprites[tempInt]);
                    map_t[i][j].setPosition(i * tilesize, j * tilesize);
                }
                tempInt++;
                if(map_t[i][j].ID == 9) {
                    map_t[i][j].setSprite(sprites[tempInt]);
                    map_t[i][j].setPosition(i * tilesize, j * tilesize);
                }
                if(map_t[i][j].ID == 0) {
                    map_t[i][j].setSprite(errsprite);
                    map_t[i][j].setPosition(i * tilesize, j * tilesize);
                }
                window.draw(map_t[i][j].getSprite());
            }
        }
    }
}

void LevelLoader::deleteAll()
{
    delete[] textures;
    delete[] sprites;
}