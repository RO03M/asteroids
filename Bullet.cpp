#include "Bullet.hpp"
#include "Time.hpp"
#include <math.h>

Bullet::Bullet(float angle, float x, float y) {
	this->angle = angle;
	this->x = x;
	this->y = y;
	DefineSize(2, 2);
	rect.setSize(sf::Vector2f(width, height));
	rect.setFillColor(sf::Color::White);
}

void Bullet::Update() {
	x += cos(-angle * PI / 180) * speed * Time::deltaTime;
	y += sin(-angle * PI / 180) * speed * Time::deltaTime;
	rect.setPosition(x, y);
}

void Bullet::Draw(sf::RenderWindow* window) {
	window->draw(rect);
}