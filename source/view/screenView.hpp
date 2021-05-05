/**
 * Author: Alex Meier
 * Email: ameier42@gmail.com
 * Date: 5/4/2021
 */
#ifndef __SCREENVIEW__
#define __SCREENVIEW__
#include <SFML/graphics.hpp>
#include "squareView.hpp"
namespace project_1::view{
    const int SCREEN_X = 50;
    const int SCREEN_Y = 50;

    class ScreenView : public View{
        public:
        ScreenView();
        void Draw(sf::RenderWindow &window);
        private:
        SquareView ***ViewGrid;
    };
}


#endif