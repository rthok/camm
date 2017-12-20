#ifndef InterfaceSumOfAngles_HPP
#define InterfaceSumOfAngles_HPP

#include <iostream>
#include "LibrarySumOfAngles.hpp"
using namespace std;

class InterfaceSumOfAngles
{
	private:
		LibrarySumOfAngles* LSOA;
		//Only functions inside the class can access private class functions.

	public:
		InterfaceSumOfAngles();
		void InterfaceFunction();
		~InterfaceSumOfAngles();

};
# endif
