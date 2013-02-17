#include <SFML/Graphics.hpp>
#include <fstream>
#include <iostream>
#include <string>
#include "Tile.h"

// LevelLoader Class
class LevelLoader {
public:
    LevelLoader(); // Constructor
    ~LevelLoader(); // Destructor
    void load(const char* filename); // Load the level from a file
    void render(sf::RenderWindow &window, sf::View view); // Render the level
    void deleteAll(); // De-allocate all the allocated stuff
private:
    Tile map_t[100][100]; // Array of tiles
    //std::string map_i[100][100]; // Array of information
    int tilesize; // Tile size
    int width; // Width of the level
    int height; // Height of the level
    int textures_n; // Number of textures
    sf::Sprite *sprites; // Sprites for storing the textures
    sf::Texture *textures; // The textures
};