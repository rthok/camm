#ifndef LibraryCosinesLaw_HPP
#define LibraryCosinesLaw_HPP

#include <iostream>
#include <cmath> //So I can use cos
#include "LibraryConversion.hpp"
using namespace std;

class LibraryCosinesLaw
{
	private:
		LibraryConversion* LC;
		//Only functions inside the class can access private class functions.

	public:
		LibraryCosinesLaw();
		double getAns(double a, double b, double c, double A, double B, double C);
		~LibraryCosinesLaw();

};
# endif
