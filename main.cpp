#include <iostream>
#include <SFML/Graphics.hpp>
#include <stdio.h>
#include <typeinfo>
#include "Window.hpp"
#include "Mouse.hpp"
#include "Entity.hpp"
#include "Sprite.hpp"
#include "RenderingSystem.hpp"

int main() {

	Window window(sf::VideoMode(500, 500), "renner viado");
	Entity teste;
	Sprite sprite;
	if (typeid(sprite) == typeid(Sprite)) std::cout << "fazer isso aqui dps, mó paz" << std::endl;
	sprite.AddTexture("images/player.png");
	teste.AddComponent(&sprite);
	teste.GetComponent<Sprite>(sprite);
	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				std::cout << "closed" << std::endl;
				window.close();
			}
		}

		for (int i = 0; i < Rendering::componentList.size(); i++) {
			Rendering::componentList[i]->Update();
		}

		window.clear(sf::Color::Black);

		for (int i = 0; i < Rendering::componentList.size(); i++) {
			Rendering::componentList[i]->Draw(&window);
		}

		window.display();

	}

	return 0;
}