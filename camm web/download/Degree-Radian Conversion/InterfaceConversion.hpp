#ifndef InterfaceConversion_HPP
#define InterfaceConversion_HPP

#include <iostream>
#include <cmath> //So I can use cos
#include "LibraryConversion.hpp"
using namespace std;

class InterfaceConversion
{
	private:
		LibraryConversion* LC;
		//Only functions inside the class can access private class functions.

	public:
		InterfaceConversion();
		void InterfaceFunction();
		~InterfaceConversion();

};
# endif
