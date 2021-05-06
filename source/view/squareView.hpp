#ifndef __SQUAREVIEW__
#define __SQUAREVIEW__
#include <SFML/Graphics.hpp>
#include "view.hpp"
namespace project_1::view
{
    class SquareView : View {
        public:
        SquareView(int x, int y);
        void Draw(sf::RenderWindow &window);
        private:
        int p_x;
        int p_y;
        int frame;
    };
} // namespace project_1::view
#endif