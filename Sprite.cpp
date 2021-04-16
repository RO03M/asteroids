#include "Sprite.hpp"

Sprite::Sprite() {

}

void Sprite::Update() {
	
}

void Sprite::Draw(Window* window) {
	sf::RectangleShape shape(sf::Vector2f(32, 32));
	shape.setTexture(&texture);
	window->draw(shape);
}

void Sprite::AddTexture(std::string texturePath) {
	texture.loadFromFile(texturePath);
}