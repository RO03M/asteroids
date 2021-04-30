#include "utils.hpp"
#include <iostream>

bool Utils::IsColliding(Entity a, Entity b) {
	return (a.x + a.width >= b.x && a.x <= b.x + b.width) && (a.y + a.height >= b.y && a.y <= b.y + b.height);
}