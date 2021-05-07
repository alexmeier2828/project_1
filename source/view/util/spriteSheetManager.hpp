#if !defined(__SPRITESHEETMANAGER__)
#define __SPRITESHEETMANAGER__
#include <iostream>
#include <SFML/Graphics.hpp>
namespace project_1::view::util
{
    class SpriteSheetManager {
        public:
        SpriteSheetManager(int spriteSize, int width, const std::string file);
        sf::Texture GetTexture();
        sf::IntRect GetBoundingRect(int spriteId);

        private:
        sf::Texture *_texture;
        int _spriteSize, _sheetWidth;
    };
} // namespace project_1::vi:util
#endif // __SPRITESHEETMANAGER__
