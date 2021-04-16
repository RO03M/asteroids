#ifndef WINDOW
#define WINDOW
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

class Window: public sf::RenderWindow {
	public:
		Window(sf::VideoMode videoMode, sf::String title) : RenderWindow(videoMode, title) {

		}
		int GetWidth();
		int GetHeight();
		sf::Vector2u GetSize();
		sf::Vector2i GetPosition();
};

#endif