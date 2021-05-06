#include "screenView.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <random>
using namespace project_1::view;
ScreenView::ScreenView(){
    std::cout << "test";
    this->ViewGrid = new SquareView**[SCREEN_X];
    for(int x = 0; x < SCREEN_X; x++){
        ViewGrid[x] = new SquareView*[SCREEN_Y];
        for(int y = 0; y < SCREEN_Y; y++){
            ViewGrid[x][y] = new SquareView(x, y);
        }
    }
}

void ScreenView::Draw(sf::RenderWindow &window){
    for(int x = 0; x < SCREEN_X; x++){
        for(int y = 0; y < SCREEN_Y; y++){
            this->ViewGrid[x][y]->Draw(window); 
        }
    }
}