#include "Complex.h"

Complex::Complex() :Norm()
{
	x = 0;
	y = 0;
}
Complex::Complex(float _re, float _im) : Norm()
{
	x = _re;
	y = _im;
}


float Complex::completeNorm()
{
	return pow(completeModule(), 2);
}

float Complex::completeModule()
{
	return sqrt(pow(x, 2) + pow(y, 2));
}
