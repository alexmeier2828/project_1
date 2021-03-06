#ifndef __SQUAREVIEW__
#define __SQUAREVIEW__
#include <SFML/Graphics.hpp>
#include "animatedSprite.hpp"
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
        AnimatedSprite *_animatedSprite;
    };
} // namespace project_1::view
#endif