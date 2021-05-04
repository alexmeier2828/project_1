#include <iostream>
#include <SFML/Graphics.hpp>

class hello_world {
    public: 
        void print_hello();
};

void hello_world::print_hello(){
   std::cout << "hello world\n"; 
}


int main(int argc, char **argv){
    hello_world h;

    sf::RenderWindow window(sf::VideoMode(200,200), "Hello World!");
    sf::CircleShape shape(100.f);
    shape.setOutlineColor(sf::Color::Green);
    shape.setFillColor(sf::Color::Cyan);

    while(window.isOpen()){
        sf::Event event;
        while(window.pollEvent(event)){
            if(event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    h.print_hello();
}