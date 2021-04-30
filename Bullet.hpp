#ifndef BULLET
#define BULLET

#include <SFML/Graphics.hpp>
#include "Entity.hpp"

class Bullet : public Entity {
	public:
		Bullet(float angle, float x, float y);
		void Update();
		void Draw(sf::RenderWindow* window);
	private:
		const float PI = 3.14159265358979323846f;
		float angle;
		float speed = 200;
		sf::RectangleShape rect;
};

#endif