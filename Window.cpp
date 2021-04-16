#include "Window.hpp"

int Window::GetWidth() {
	return this->getSize().x;
}

int Window::GetHeight() {
	return this->getSize().y;
}

sf::Vector2u Window::GetSize() {
	return this->getSize();
}

sf::Vector2i Window::GetPosition() {
	return this->getPosition();
}