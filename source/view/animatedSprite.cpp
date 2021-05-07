#include <SFML/Graphics.hpp>
#include <iostream>
#include "animatedSprite.hpp"


using namespace project_1::view;

AnimatedSprite::AnimatedSprite(int x, int y, int frames, const std::string& file) 
    : sf::Sprite() 
    {
        this->_sizeX = x;
        this->_sizeY = y;
        this->_frames = frames;
        this->_tick = 0;
        
        //attempt to load sprite sheet
        sf::Texture texture;
        if(!texture.loadFromFile(file)){
            std::cout << "error occured opening sprite";
        }
        this->setTexture(texture);
        this->setTextureRect(
            sf::Rect(
                _sizeX * (_tick % _frames),
                0,
                _sizeX,
                _sizeY));
    }

void AnimatedSprite::Tick(){
    _tick++;
    //set next rect in sprite sheet
    sf::Rect rect(
        _sizeX * (_tick % _frames), 
        0,
        _sizeX,
        _sizeY);
    setTextureRect(rect);
}