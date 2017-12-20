#ifndef InterfaceSinesLaw_HPP
#define InterfaceSinesLaw_HPP

#include <iostream>
#include <cmath> //So I can use cos
#include "LibrarySinesLaw.hpp"
using namespace std;

class InterfaceSinesLaw
{
	private:
		LibrarySinesLaw* LSL;
		//Only functions inside the class can access private class functions.

	public:
		InterfaceSinesLaw();
		void getInterfaceAns();
		~InterfaceSinesLaw();

};
# endif
