#ifndef ASTEROID
#define ASTEROID

#include <SFML/Graphics.hpp>
#include "Entity.hpp"

class Asteroid : public Entity {
	public:
		Asteroid(float x, float y);
		float speed = 5;
		float random_rotation_speed;
		float random_angle_x;
		float random_angle_y;
		bool hitted = false;
		void Update();
		void Draw(sf::RenderWindow* window);
};

#endif