#ifndef InterfaceSystemLinearEquations_HPP
#define InterfaceSystemLinearEquations_HPP

#include <iostream>
#include <vector> //So I can use a vector
#include <cmath> //So I can use cos
#include "LibrarySystemLinearEquations.hpp"
using namespace std;

class InterfaceSystemLinearEquations
{
	private:
		LibrarySystemLinearEquations* LSLE;
		//Only functions inside the class can access private class functions.

	public:
		InterfaceSystemLinearEquations();
		void InterfaceFunction();
		~InterfaceSystemLinearEquations();

};
# endif
