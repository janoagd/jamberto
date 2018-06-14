#pragma once

#include"Texture.h"
#include "MotorToolset.h"
using namespace MotorToolset;

class GameObject
{


public:
	LTexture objTexture;
	Vector2 origin;//The point from which the object's rectangle begins to be drawn
	Vector2 pivot;//The pivot from which the position of the object will be calculated
	
	Vector2 position;//Manipulation point for the object's position
	float	rotation;//Angle of rotation
	Vector2 scale;//Scale of the object (multiplies the size)
	
	Rectangle getRectangle();
	

	GameObject();
	GameObject(Vector2 pos, float rot, Vector2 scale);

	~GameObject();
private:
	Vector2 size;//width and height in pixels
	Rectangle objRect;




	 

	void makeRectangle()
	{
		objRect = Rectangle(pivot, size);
	}
	

};

