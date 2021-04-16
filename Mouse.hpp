#ifndef MOUSE
#define MOUSE

#include <SFML/Graphics.hpp>

class Mouse {
	public:
		static const sf::Vector2i ScreenPosition();
		static const sf::Vector2i WindowPosition(sf::RenderWindow& window);
};

#endif
