#ifndef InterfaceRecurrenceRelation_HPP
#define InterfaceRecurrenceRelation_HPP

#include <iostream>
#include <vector> //So I can use a vector
#include <cmath> //So I can use cos
#include "LibraryRecurrenceRelation.hpp"
using namespace std;

class InterfaceRecurrenceRelation
{
	private:
		LibraryRecurrenceRelation* LRR;
		//Only functions inside the class can access private class functions.

	public:
		InterfaceRecurrenceRelation();
		void InterfaceFunction();
		~InterfaceRecurrenceRelation();

};
# endif
