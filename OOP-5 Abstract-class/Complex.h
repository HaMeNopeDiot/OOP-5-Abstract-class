#pragma once
#include <iostream>
#include "Norm.h"

class Complex : public Norm
{
public:
	Complex();
	Complex(float _re, float _im);

	virtual float completeNorm();
	virtual float completeModule();

	//virtual void setData(float _re, float _im);
	//virtual void getData();


};