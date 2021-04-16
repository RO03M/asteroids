#ifndef COMPONENT
#define COMPONENT

#include <iostream>
#include <vector>
#include <string>
#include "Window.hpp"

class Component {
	public:
		void Start();
		std::vector<Component*> components;
		int id;
		virtual void Update();
		virtual void Draw(Window* window);
};

#endif