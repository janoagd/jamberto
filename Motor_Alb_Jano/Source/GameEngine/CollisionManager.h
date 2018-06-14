#pragma once
#include "GameObject.h"
#include "MotorToolset.h"
using namespace MotorToolset;


class CollisionManager
{
public:
	CollisionManager();

	bool collide(GameObject target, GameObject other) {
		
		if (collision(target.getRectangle(), other.getRectangle())) {
			return true;
		}
		else if (collision(other.getRectangle(), target.getRectangle())) {
			return true;
		}else return false;
	}
	

	bool collide(GameObject target, Vector2 other) {
		if (collision(target.getRectangle(), other)) return true;
		else return false;
	}

	bool collide(Vector2 target, GameObject other) {
		if (collision(other.getRectangle(), target)) return true;
		else return false;
	}

	~CollisionManager();

private:
	bool collision(Rectangle col1, Rectangle col2) {
		if ((col2.origin.x < col1.origin.x < col2.origin.x + col2.size.x) &&
			((col2.origin.y > col1.origin.y - col1.size.y > col2.origin.y - col2.size.y) ||
			(col2.origin.y > col1.origin.y > col2.origin.y - col2.size.y))) return true;
		else return false;
	}

	bool collision(Rectangle col1, Vector2 col2) {
		if ((col1.origin.x < col2.x < col1.origin.x + col1.size.x) &&
			(col1.origin.y > col2.y > col1.origin.y - col1.size.y)) return true;
		else return false;
	}
};

