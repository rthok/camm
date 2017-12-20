#include "InterfaceChemistry.hpp"

InterfaceChemistry::InterfaceChemistry()
{
	LC = new LibraryChemistry();
	return;
}


void InterfaceChemistry::InterfaceFunction()
{
	int choice = -1;

	while(choice != 0)
	{
		cout << "\nIf you wish to exit, press 0." << endl;
		cout << "If you wish to find the density of an object, press 1." << endl;
		cout << "If you wish to find the neutrons in an element, press 2." << endl;
		cout << "If you wish to find the protons in an element, press 3." << endl;
		cout << "If you wish to find the electrons in an element, press 4." << endl;
		cout << "If you wish to find the Molarity of a solution, press 5." << endl;
		cout << "If you wish to find the Molality of a solution, press 6." << endl;

		cin >> choice;
		if(choice == 0)
		{
			break;
		}

		else if(choice == 1)
		{
			DensityInterface();
		}

		else if(choice == 2)
		{
			NeutronInterface();
		}

		else if(choice == 3)
		{
			ProtonInterface();
		}

		else if(choice == 4)
		{
			ElectronInterface();
		}

		else if(choice == 5)
		{
			MolarityInterface();
		}

		else if(choice == 6)
		{
			MolalityInterface();
		}

		else
		{
			cout << "You have selected an invalid option." << endl;
		}

	}

	return;
}


void InterfaceChemistry::DensityInterface()
{
	double p1, p2, p3;
	cout << "Please enter the weight of the object in grams." << endl;
	cin >> p1;
	cout << "Please enter the volume of the object in mililiters." << endl;
	cin >> p2;
	p3 = LC->density(p1, p2);

	cout << "The density = " << p3 << " g/mL." << endl;

	return;
}

void InterfaceChemistry::NeutronInterface()
{
	int intElement, answer;

	cout << "Please enter the atomic number of the element." << endl;
	cin >> intElement;
	answer = LC->neutron(intElement);

	cout << "The number of neutrons in the element = " << answer << endl;

	return;
}

void InterfaceChemistry::ProtonInterface()
{
	int intElement, answer;

	cout << "Please enter the atomic number of the element." << endl;
	cin >> intElement;
	answer = LC->proton(intElement);

	cout << "The number of protons in the element = " << answer << endl;

	return;
}

void InterfaceChemistry::ElectronInterface()
{
	int intElement, answer;

	cout << "Please enter the atomic number of the element." << endl;
	cin >> intElement;
	answer = LC->electron(intElement);

	cout << "The number of electrons in the element = " << answer << endl;

	return;
}

void InterfaceChemistry::MolarityInterface()
{
	double p1, p2, p3;

	cout << "Please enter the number of moles of solute." << endl;
	cin >> p1;
	cout << "Please enter the amount of solution in Liters." << endl;
	cin >> p2;
	p3 = LC->Molarity(p1, p2);

	cout << "The Molarity = " << p3 << " M." << endl;

	return;
}

void InterfaceChemistry::MolalityInterface()
{
	double p1, p2, p3;

	cout << "Please enter the number of moles of solute." << endl;
	cin >> p1;
	cout << "Please enter the amount of solvent in kilograms." << endl;
	cin >> p2;
	p3 = LC->Molality(p1, p2);

	cout << "The Molality = " << p3 << " m." << endl;

	return;
}

InterfaceChemistry::~InterfaceChemistry()
{

}
