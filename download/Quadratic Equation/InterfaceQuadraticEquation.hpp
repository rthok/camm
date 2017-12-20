#ifndef InterfaceQuadraticEquation_HPP
#define InterfaceQuadraticEquation_HPP

#include <iostream>
#include <vector> //So I can use a vector
#include <cmath> //So I can use cos
#include "LibraryQuadraticEquation.hpp"
using namespace std;

class InterfaceQuadraticEquation
{
	private:
		LibraryQuadraticEquation* LQE;
		//Only functions inside the class can access private class functions.

	public:
		InterfaceQuadraticEquation();
		void InterfaceFunction();
		~InterfaceQuadraticEquation();

};
# endif
