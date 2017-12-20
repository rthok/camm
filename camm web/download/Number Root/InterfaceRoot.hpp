#ifndef InterfaceRoot_HPP
#define InterfaceRoot_HPP

#include <iostream>
#include <vector> //So I can use a vector
#include "LibraryRoot.hpp"
using namespace std;

class InterfaceRoot
{
	private:
		LibraryRoot* p1;
		//Only functions inside the class can access private class functions.

	public:
		InterfaceRoot();
		void InterfaceFunction();
		~InterfaceRoot();

};
# endif
