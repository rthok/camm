#ifndef InterfaceInterest_HPP
#define InterfaceInterest_HPP

#include <iostream>
#include <cmath>
#include "LibraryInterest.hpp"
using namespace std;

class InterfaceInterest
{
	private:
		LibraryInterest* LI;
		//Only functions inside the class can access private class functions.

	public:
		InterfaceInterest();
		void InterfaceFunction();
		~InterfaceInterest();

};
# endif
