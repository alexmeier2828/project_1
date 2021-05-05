#include "squareView.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace project_1::view;

SquareView::SquareView(int x, int y){
    this->p_x = x*10;
    this->p_y = y*10;
}

void SquareView::Draw(sf::RenderWindow &window){
    sf::Sprite sprite;
    sf::Texture texture;
    if(!texture.loadFromFile("/Users/alexmeier/Desktop/workspace/project_1/resources/tile-1.png")){
        std::cout << "error occured opening sprite";
    }
    sprite.setTexture(texture);
    sprite.setPosition(sf::Vector2f(this->p_x, this->p_y)); // absolute position
    window.draw(sprite);
}


