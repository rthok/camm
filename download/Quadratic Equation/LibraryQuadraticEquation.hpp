#ifndef LibraryQuadraticEquation_HPP
#define LibraryQuadraticEquation_HPP

#include <iostream>
#include <vector> //So I can use a vector
#include <cmath> //So I can use cos
using namespace std;

class LibraryQuadraticEquation
{
	private:
		double holder1;
		double holder2;
		//Only functions inside the class can access private class functions.

	public:
		LibraryQuadraticEquation();
		void XVal(int a, int b, int c);
		double getholder1();
		double getholder2();
		~LibraryQuadraticEquation();

};
# endif
