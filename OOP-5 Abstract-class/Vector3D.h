#pragma once
#include <iostream>
#include <vector>
#include <cmath>
#include "Norm.h"

class Vector3D : public Norm
{
protected:
	float z;
public:
	Vector3D();
	Vector3D(float _x, float _y, float _z);

	virtual float completeNorm();
	virtual float completeModule();

	//virtual void setData(float _x, float _y, float _z);
	//virtual void getData();

	virtual void setX(float _x);
	virtual void setY(float _y);
	virtual void setZ(float _z);
	
	virtual float getX();
	virtual float getY();
	virtual float getZ();
};