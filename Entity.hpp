#ifndef ENTITY
#define ENTITY

#include "Component.hpp"
#include "Sprite.hpp"

class Entity: public Component {
	public:
		Entity();
		void AddComponent(Component* component);
		//template <typename T> void AddComponent(T component);
		template <class T> void GetComponent(T component);
};

#endif // !ENTITY
