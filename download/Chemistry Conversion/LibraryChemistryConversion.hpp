#ifndef LibraryChemistryConversion_HPP
#define LibraryChemistryConversion_HPP

#include <iostream>
#include <vector> //So I can use a vector
#include <cmath> //So I can use cos
using namespace std;

class LibraryChemistryConversion
{
	private:
		double Elements[110];
		//Only functions inside the class can access private class functions.

	public:
		LibraryChemistryConversion();
		void fill();
		double getElementValue(int myElement);
		double GramToMole(vector<int> myElement, double A);
		double MoleToGram(vector<int> myElement, double A);
		double L_to_mL(double A);
		double mL_to_L(double A);
		double atm_to_mmHg(double amount);
		double mmHg_to_atm(double amount);
		double atm_to_kPa(double amount);
		double kPa_to_atm(double amount);
		double mmHg_to_kPa(double amount);
		double kPa_to_mmHg(double amount);
		double g_to_kg(double amount);
		double kg_to_g(double amount);
		double pH_to_pOH(double amount);
		double pOH_to_pH(double amount);
		double CtoF(double A);
		double FtoC(double A);
		double CtoK(double A);
		double KtoC(double A);
		double FtoK(double A);
		double KtoF(double A);
		~LibraryChemistryConversion();

};
# endif
