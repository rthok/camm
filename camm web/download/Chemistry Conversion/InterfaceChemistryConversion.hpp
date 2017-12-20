#ifndef InterfaceChemistryConversion_HPP
#define InterfaceChemistryConversion_HPP

#include <iostream>
#include <vector> //So I can use a vector
#include "LibraryChemistryConversion.hpp"
using namespace std;

class InterfaceChemistryConversion
{
	private:
		LibraryChemistryConversion* LCC;
		//Only functions inside the class can access private class functions.

	public:
		InterfaceChemistryConversion();
		void InterfaceFunction();
		void Pressure();
		void PotentialOfHydrogen();
		void GramsAndKilograms();
		void LitersAndMililiters();
		void GramsAndMoles();
		void Temperature();
		~InterfaceChemistryConversion();

};
# endif
