#ifndef LibraryTrigArea_HPP
#define LibraryTrigArea_HPP

#include <iostream>
#include <cmath> //So I can use sqrt
#include "LibraryConversion.hpp"
using namespace std;

class LibraryTrigArea
{
	private:
		double current, s, block1, block2, block3;
		LibraryConversion* LC;
		//Only functions inside the class can access private class functions.

	public:
		LibraryTrigArea();
		double HeronFormula(double a, double b, double c);
		double SideAngleSideFormula(double side1, double side2, double angle1, int radian);
		double getcurrent();
		double gets();
		double getblock1();
		double getblock2();
		double getblock3();
		~LibraryTrigArea();

};
# endif
