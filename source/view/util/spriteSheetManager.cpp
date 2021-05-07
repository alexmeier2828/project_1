#include "spriteSheetManager.hpp"

using namespace project_1::view::util;

SpriteSheetManager::SpriteSheetManager(int spriteSize, int width, const std::string file){
    _texture = new sf::Texture();
    if(!_texture->loadFromFile(file)){
        std::cout << "Error loading spriteSheet " << "file"; 
    }

    _sheetWidth = width;
    _spriteSize = spriteSize;
}

sf::Texture SpriteSheetManager::GetTexture(){
    return *_texture;
}

/**
 * Returns bounding rectangle associated with given sprite number 
 */
sf::IntRect SpriteSheetManager::GetBoundingRect(int spriteId){
    int xChordinate = (spriteId % _sheetWidth) * _spriteSize;
    int yChordinate = (spriteId / _sheetWidth) * _spriteSize;
    return sf::Rect(xChordinate, yChordinate, _spriteSize, _spriteSize);
}