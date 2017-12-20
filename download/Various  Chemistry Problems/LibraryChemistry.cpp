#include "LibraryChemistry.hpp"

LibraryChemistry::LibraryChemistry()
{
	LCC = new LibraryChemistryConversion();
	return;
}


double LibraryChemistry::density(double mass, double volume)
{
	return mass/(volume/1.0);
}

//Returns the number of neutrons in one mole of an element. 
int LibraryChemistry::neutron(int myElement)
{
	double doubleHolder;
	int intHolder;
	doubleHolder = LCC->getElementValue(myElement); 

	//Round to nearest whole number.
	doubleHolder += .5;
	intHolder = doubleHolder;
	
	return intHolder - myElement;
}

int LibraryChemistry::proton(int myElement)
{
	return myElement;
}

int LibraryChemistry::electron(int myElement)
{
	return myElement;
}

//The first argument should be moles of the solute, the second the solution in Liters.
//By solution, I mean the whole final batch. The solvent + the solute.
double LibraryChemistry::Molarity(double moleSolute, double literSolution)
{
	return moleSolute/(literSolution/1.0);
}

double LibraryChemistry::Molality(double moleSolute, double kilogramSolvent)
{
	return moleSolute/(kilogramSolvent/1.0);
}

LibraryChemistry::~LibraryChemistry()
{

}
