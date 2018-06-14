#pragma once

#include "MotorToolset.h"
using namespace MotorToolset;

class GameObject
{


public:
	Vector2 origin;//The point from which the object's rectangle begins to be drawn
	Vector2 center;//The center of the object's rectangle
	
	Vector2 position;//Its pivot point
	float	rotation;//Angle of rotation
	Vector2 scale;//Scale of the object (multiplies the size)
	
	GameObject();
	~GameObject();
private:
	Vector2 size;//width and height in pixels
	Rectangle objRect;





	void setRectangle()
	{
		objRect = Rectangle(center, size)
	}
	

};

