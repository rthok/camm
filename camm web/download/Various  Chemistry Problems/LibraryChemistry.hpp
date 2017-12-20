#ifndef LibraryChemistry_HPP
#define LibraryChemistry_HPP

#include <iostream>
#include <cmath> //So I can use cos
#include "LibraryChemistryConversion.hpp"
using namespace std;

class LibraryChemistry
{
	private:
		LibraryChemistryConversion* LCC;
		//Only functions inside the class can access private class functions.

	public:
		LibraryChemistry();
		double density(double mass, double volume);
		int neutron(int myElement);
		int proton(int myElement);
		int electron(int myElement);
		double Molarity(double moleSolute, double literSolution);
		double Molality(double moleSolute, double kilogramSolvent);
		~LibraryChemistry();

};
# endif
