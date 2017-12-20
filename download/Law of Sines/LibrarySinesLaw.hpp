#ifndef LibrarySinesLaw_HPP
#define LibrarySinesLaw_HPP

#include <iostream>
#include <cmath> //So I can use cos
#include "LibraryConversion.hpp"
using namespace std;

class LibrarySinesLaw
{
	private:
		LibraryConversion* LC;
		//Only functions inside the class can access private class functions.

	public:
		LibrarySinesLaw();
		double getAns(double a, double b, double A, double B);
		~LibrarySinesLaw();

};
# endif
