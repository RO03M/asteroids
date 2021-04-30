#include "Asteroid.hpp"
#include "Time.hpp"
#include <iostream>
#include <random>
#include <algorithm>

Asteroid::Asteroid(float x, float y) {
	this->x = x;
	this->y = y;
	m_texture.loadFromFile("textures/asteroid_1.png");
	DefineSize(m_texture);
	m_sprite.setTexture(m_texture);
	m_sprite.setOrigin(width / 2, height / 2);
	random_angle_x = rand() % 359;
	random_angle_y = rand() % 359;
	random_rotation_speed = rand() % 10 + 1;
}

void Asteroid::Update() {
	m_sprite.rotate(Time::deltaTime * random_rotation_speed);
	x += cos(random_angle_x) * speed * Time::deltaTime;
	y += sin(random_angle_y) * speed * Time::deltaTime;
	if (x > 300) x = 0;
	else if (x < 0) x = 300;
	if (y > 300) y = 0;
	else if (y < 0) y = 300;
}

void Asteroid::Draw(sf::RenderWindow* window) {
	m_sprite.setPosition(x, y);
	window->draw(m_sprite);
}