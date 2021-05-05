#include <iostream>
#include <SFML/Graphics.hpp>
#include "view/screenView.hpp"

using namespace project_1;

int main(int argc, char **argv){
    sf::RenderWindow window(sf::VideoMode(500, 500), "hello world");
    view::ScreenView screenView;
    while(window.isOpen()){
        sf::Event event;
        while(window.pollEvent(event)){
            if(event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        screenView.Draw(window);
        window.display();
    }
}