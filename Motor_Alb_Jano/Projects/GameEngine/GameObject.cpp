#include "GameObject.h"
#include "Texture.h"
#include "RenderManager.h"

GameObject::GameObject()
{
	objTexture = LTexture();
	size = Vector2(objTexture.getWidth(), objTexture.getHeight());
	pivot = size / 2;
	position = Vector2(RenderManager::SCREEN_WIDTH, RenderManager::SCREEN_HEIGHT);
	origin = position - pivot;//This is the left upper corner of the image, this is what is moved.
	rotation = 0;
	scale = Vector2(1, 1);
	objRect = Rectangle(pivot, size);

}

GameObject::GameObject(Vector2 pos, float rot, Vector2 scale)
{


}

GameObject::~GameObject()
{
	
}

Rectangle GameObject::getRectangle()
{
	return objRect;	
}