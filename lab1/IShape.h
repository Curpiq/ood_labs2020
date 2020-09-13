#pragma once
#include "stdafx.h"

using namespace sf;

class IShape 
{
	public:
		virtual double GetPerimeter()const = 0;
		virtual double GetArea()const = 0;
};
