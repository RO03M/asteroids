#include "Mouse.hpp"

const sf::Vector2i Mouse::ScreenPosition() {
	return sf::Mouse::getPosition();
}

const sf::Vector2i Mouse::WindowPosition(sf::RenderWindow& window) {
	return sf::Mouse::getPosition(window);
}