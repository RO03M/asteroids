#ifndef RENDERING_SYSTEM
#define RENDERING_SYSTEM

#include "Component.hpp"
#include <vector>

class Rendering {
	public:
		static std::vector<Component*> componentList;//<id, object>
		/*void Update();
		void Draw();*/
};

#endif