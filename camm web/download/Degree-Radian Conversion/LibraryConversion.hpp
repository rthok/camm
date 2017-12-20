#ifndef LibraryConversion_HPP
#define LibraryConversion_HPP

#include <iostream>
#include <cmath> //So I can use cos
using namespace std;

class LibraryConversion
{
	private:
		//Only functions inside the class can access private class functions.

	public:
		LibraryConversion();
		double getDegree(double A);
		double getRadian(double A);
		~LibraryConversion();

};
# endif
