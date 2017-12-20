#ifndef LibraryGasLaws_HPP
#define LibraryGasLaws_HPP

#include <iostream>
#include <cmath> //So I can use cos
//#include "LibraryChemistryConversion.hpp"
using namespace std;

class LibraryGasLaws
{
	private:
		//LibraryChemistryConversion* LCC;
		//Only functions inside the class can access private class functions.

	public:
		LibraryGasLaws();
		//double density(double mass, double volume);
		//int neutron(int myElement);
		//int proton(int myElement);
		//int electron(int myElement);
		double BoyleLaw(double P1, double V1, double P2, double V2);
		double CharlesLaw(double V1, double T1, double V2, double T2);
		double AmontonsLaw(double P1, double T1, double P2, double T2);
		double AvagadroLaw(double V1, double n1, double V2, double n2);
		double IdealGasLaw(double P, double V, double n, double R, double T);
		//double Molarity(double moleSolute, double literSolution);
		//double Molality(double moleSolute, double kilogramSolvent);
		~LibraryGasLaws();

};
# endif
