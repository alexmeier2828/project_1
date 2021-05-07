#include "squareView.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace project_1::view;

SquareView::SquareView(int x, int y){
    this->p_x = x*10;
    this->p_y = y*10;
    this->frame = 1;
    _animatedSprite = new AnimatedSprite(10, 10, 2, "/Users/alexmeier/Desktop/workspace/project_1/resources/tile-1.png");
    _animatedSprite->setPosition(p_x, p_y);
}

void SquareView::Draw(sf::RenderWindow &window){

    
    window.draw(*_animatedSprite);

    if(random() * 1.0/RAND_MAX > 0.5){
        _animatedSprite->Tick();
    }
}


