#pragma once
#include <iostream>

class Norm {
protected:
	float x,y;
public:
	Norm(float _x, float _y);
	Norm():x(0),y(0){}
	virtual float completeNorm() = 0;
	virtual float completeModule() = 0;

	//virtual void setData();
	//virtual void getData() = 0;

	void setX(float _x);
	void setY(float _y);

	float getX();
	float getY();
};