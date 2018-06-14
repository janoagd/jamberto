#pragma once
#include <cmath>
namespace MotorToolset
{
	class Vector2{
	public:
		float x;
		float y;
		
#pragma region Constructors
		Vector2(float _x, float _y) : x(_x), y(_y) {}//Parametrized constructor
		Vector2() : x(0), y(0) {}					 //Empty constructor
#pragma endregion

#pragma region Utility functions

		Vector2 Zero()
		{
			return Vector2();
		}

		Vector2 One()
		{
			return Vector2(1, 1);
		}

		Vector2 Right()
		{
			return Vector2(1, 0);
		}
		Vector2 Up()
		{
			return Vector2(0, 1);
		}
		Vector2 Left()
		{
			return Vector2(-1, 0);
		}
		Vector2 Down()
		{
			return Vector2(0, -1);
		}

		float magnitude(Vector2& v)
		{
			return(sqrt(pow(v.x, 2) + pow(v.y, 2)));
		}

#pragma endregion

#pragma region Operators Overload

		Vector2 operator+ (const Vector2& added)
		{
			return Vector2(x + added.x, y + added.y);
		}

		Vector2 operator- (const Vector2& substracted)
		{
			return Vector2(x - substracted.x, y - substracted.y);
		}

		float operator* (const Vector2& mult)
		{
			return (x * mult.x) + (y * mult.y);
		}

		Vector2 operator* (const float& mult)
		{
			return Vector2(x * mult, y * mult); 
		}

		Vector2 operator/ (const float& div)
		{
			return Vector2(x / div, y / div);
		}

		Vector2& operator= (const Vector2& v)
		{
			x = v.x;
			y = v.y;
			return *this;
		}
#pragma endregion

	};
	
	class Rectangle {
	public:
		Vector2 origin;
		Vector2 size;
		Vector2 center = Vector2(size.x / 2, size.y / 2);

#pragma region Constructors

		Rectangle(float _width, float _height) : origin(0,0), size(_width,_height) {}//Default constructor with origin at 0,0

		Rectangle(float _centerX, float _centerY, float _width, float _height) : size(_width, _height) {
																					//From center Constructor
			center = Vector2(_centerX, _centerY);
			computeOrigin();
		}

		Rectangle(float _originX, float _originY, float _width, float _height) : origin(_originX,_originY), size(_width, _height) {}
																					//Parametrized constructor
		Rectangle() : origin(0,0), size(1, 1) {}//Default constructor 

		Rectangle(Vector2 _origin, Vector2 _size) : origin(_origin), size(_size) {}	//Array Constructor

		Rectangle(Vector2 _center, Vector2 _size) : size(_size), center(_center) {	//From Center Array Constructor
			computeOrigin();
		}

#pragma endregion

#pragma region Functions

		Vector2 getCenter()
		{
			return Vector2(size.x / 2, size.y / 2);
		}

		void computeOrigin()
		{
			origin = center - (size / 2);
		}

		Vector2 getOrigin()
		{
			return origin;
		}

#pragma endregion

		
	};

};

