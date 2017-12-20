#include "LibraryQuadraticEquation.hpp"

LibraryQuadraticEquation::LibraryQuadraticEquation()
{
	return;
}

void LibraryQuadraticEquation::XVal(int a, int b, int c)
{
	double hold1, hold2, hold3;
	hold1 = pow(b, 2.0);
	hold1 = hold1 - (4*a*c);
	if(hold1 >= 0)
	{
		hold2 = (-1*b) + sqrt(hold1/1.0);
		hold3 = (-1*b) - sqrt(hold1/1.0);
		hold2 = hold2/(2.0*a);
		hold3 = hold3/(2.0*a);
		holder1 = hold2;
		holder2 = hold3;
	}
}

double LibraryQuadraticEquation::getholder1()
{
	return holder1;
}

double LibraryQuadraticEquation::getholder2()
{
	return holder2;
}

LibraryQuadraticEquation::~LibraryQuadraticEquation()
{

}
