#ifndef InterfaceTrigArea_HPP
#define InterfaceTrigArea_HPP

#include <iostream>
#include <cmath> //So I can use sqrt
#include "LibraryTrigArea.hpp"
using namespace std;

class InterfaceTrigArea
{
	private:
		//Only functions inside the class can access private class functions.

	public:
		InterfaceTrigArea();
		void InterfaceFunction();
		~InterfaceTrigArea();

};
# endif
