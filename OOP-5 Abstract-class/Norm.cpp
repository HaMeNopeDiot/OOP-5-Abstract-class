#include "Norm.h"

Norm::Norm(float _x, float _y)
{
	x = _x;
	y = _y;
}
void Norm::setX(float _x)
{
	x = _x;
}
void Norm::setY(float _y)
{
	y = _y;
}

float Norm::getX()
{
	return x;
}
float Norm::getY()
{
	return y;
}