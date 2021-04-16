#include "Entity.hpp"
#include "RenderingSystem.hpp"

Entity::Entity() {
	Component::Start();
}

void Entity::AddComponent(Component* component) {
	components.push_back(component);
}

template <class T> void Entity::GetComponent(T component) {
	std::cout << "get component";
}

template void Entity::GetComponent<Sprite>(Sprite);

//template <typename T> void Entity::AddComponent(T component) {
//	Component::components.push_back(component);
//	std::cout << "adding component: " << components.size() << std::endl;
//}
//
//template void Entity::AddComponent<Component>(Component);
//template void Entity::AddComponent<Sprite>(Sprite);