#ifndef InterfaceDirectionFields_HPP
#define InterfaceDirectionFields_HPP

#include <iostream>
#include <vector> //So I can use a vector
#include <cmath> //So I can use cos
#include "LibraryDirectionFields.hpp"
using namespace std;

class InterfaceDirectionFields
{
	private:
		LibraryDirectionFields* LDF;
		//Only functions inside the class can access private class functions.

	public:
		InterfaceDirectionFields();
		vector<int> keyStroke();
		void InterfaceFunction();
		~InterfaceDirectionFields();

};
# endif
