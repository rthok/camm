#ifndef InterfaceChemistry_HPP
#define InterfaceChemistry_HPP

#include <iostream>
#include <cmath> //So I can use cos
#include "LibraryChemistry.hpp"
using namespace std;

class InterfaceChemistry
{
	private:
		LibraryChemistry* LC;
		//Only functions inside the class can access private class functions.

	public:
		InterfaceChemistry();
		void InterfaceFunction();
		void DensityInterface();
		void NeutronInterface();
		void ProtonInterface();
		void ElectronInterface();
		void MolarityInterface();
		void MolalityInterface();
		~InterfaceChemistry();

};
# endif
