#include "Component.hpp"
#include "RenderingSystem.hpp"

void Component::Start() {
	id = Rendering::componentList.size();
	Rendering::componentList.push_back(this);
}

void Component::Update() {
	for (int i = 0; i < components.size(); i++) {
		components[i]->Update();
	}
}

void Component::Draw(Window* window) {
	for (int i = 0; i < components.size(); i++) {
		components[i]->Draw(window);
	}
}