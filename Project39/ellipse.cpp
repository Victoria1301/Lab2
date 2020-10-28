#include <strstream>
#include <exception>
#include <stdio.h>
#include <string.h>
#include "ellipse.h"

namespace Prog2 {
	ellipse::ellipse () :p(0, 0)
	{
		a = 1;
		b = 1;
	}
	ellipse::ellipse(double x0, double y0, double af, double bf) :p(x0, y0)
	{
		if (af == 0)
			throw std::exception();
		a = af;
		if (bf == 0)
			throw std::exception();
		b = bf;
	}

	ellipse& ellipse::setA(double a0)
	{
		if (a0 == 0)
			throw std::exception();
		a = a0;
		return *this;
	}
	ellipse& ellipse::setB(double b0)
	{
		if (b0 == 0)
			throw std::exception();
		b = b0;
		return *this;
	}
};