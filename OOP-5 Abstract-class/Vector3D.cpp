#include "Vector3D.h"

Vector3D::Vector3D()
{
	x = 0;
	y = 0;
	z = 0;
}
Vector3D::Vector3D(float _x, float _y, float _z) :Norm(_x, _y)
{
	z = _z;
}


float Vector3D::completeNorm()
{
	float maxi;
	if (abs(x) > abs(y))
	{
		if (abs(x) > abs(z))
		{
			maxi = abs(x);
		}
		else
		{
			maxi = abs(z);
		}
	}
	else
	{
		if (abs(y) > abs(z))
		{
			maxi = abs(y);
		}
		else
		{
			maxi = abs(z);
		}
	}
	return maxi;
}
float Vector3D::completeModule()
{
	return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}

//void Vector3D::setData(float _x, float _y, float _z)
//{
//	*x = _x;
//	*y = _y;
//	*z = _z;
//}

void Vector3D::setX(float _x)
{
	x = _x;
}
void Vector3D::setY(float _y)
{
	y = _y;
}
void Vector3D::setZ(float _z)
{
	z = _z;
}



float Vector3D::getX()
{
	return x;
}
float Vector3D::getY()
{
	return y;
}
float Vector3D::getZ()
{
	return z;
}

//void Vector3D::getData()
//{
//	std::cout << "x:" << *x << " y:" << *y << " z:" << *z << '\n';
//}

//16 задача на cтр 125