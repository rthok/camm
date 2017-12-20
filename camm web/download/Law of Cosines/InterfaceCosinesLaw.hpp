#ifndef InterfaceCosinesLaw_HPP
#define InterfaceCosinesLaw_HPP

#include <iostream>
#include <vector> //So I can use a vector
#include <cmath> //So I can use cos
#include "LibraryCosinesLaw.hpp"
using namespace std;

class InterfaceCosinesLaw
{
	private:
		LibraryCosinesLaw* LCL;
		//Only functions inside the class can access private class functions.

	public:
		InterfaceCosinesLaw();
		void InterfaceFunction();
		~InterfaceCosinesLaw();

};
# endif
