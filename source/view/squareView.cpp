#include "squareView.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace project_1::view;

SquareView::SquareView(int x, int y){
    this->p_x = x*10;
    this->p_y = y*10;
    this->frame = 1;
}

void SquareView::Draw(sf::RenderWindow &window){
    sf::Sprite sprite;
    sf::Texture texture;
    if(!texture.loadFromFile("/Users/alexmeier/Desktop/workspace/project_1/resources/tile-1.png")){
        std::cout << "error occured opening sprite";
    }
    sprite.setTexture(texture);
    sprite.setTextureRect(sf::Rect(this->frame * 10,0,10,10));
    sprite.setPosition(sf::Vector2f(this->p_x, this->p_y)); // absolute position
    window.draw(sprite);

    if(random() * 1.0/RAND_MAX > 0.5){
        this->frame = !this->frame;
    }
}


