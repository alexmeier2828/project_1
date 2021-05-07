#ifndef __ANIMATEDSPRITE__
#define __ANIMATEDSPRITE__

#include <SFML/Graphics.hpp>

namespace project_1::view
{
    class AnimatedSprite :public  sf::Sprite{
        public:
        AnimatedSprite(int x, int y, int frames, const std::string& file);
        void Tick();
        private:
        int _sizeX, _sizeY, _frames, _tick;
        sf::Texture *_texture;
    };
} // namespace project_1::view
#endif // __ANIMATEDSPRITE__
