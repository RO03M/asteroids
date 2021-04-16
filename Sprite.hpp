#ifndef SPRITE
#define SPRITE

#include "Component.hpp"
#include <SFML/Graphics.hpp>

class Sprite: public Component {
	public:
		Sprite();
		std::string texturePath;
		void Update() override;
		void Draw(Window* window) override;
		void AddTexture(std::string texturePath);
		sf::Texture texture;
};

#endif
