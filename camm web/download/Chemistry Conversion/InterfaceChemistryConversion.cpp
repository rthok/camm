#include "InterfaceChemistryConversion.hpp"

InterfaceChemistryConversion::InterfaceChemistryConversion()
{
	LCC = new LibraryChemistryConversion();
	return;
}

void InterfaceChemistryConversion::InterfaceFunction()
{
	//vector<int> V1;
	//Chemistry* CL = new Chemistry();
	//double p1, p2, p3, p4, p5;

	int choice = -1;
	while(choice != 0)
	{
		cout << "\nIf you wish to leave, press 0." << endl;
		cout << "If you wish to convert from one unit of pressure to another, press 1." << endl;
		cout << "If you wish to convert between pH and pOH, press 2." << endl;
		cout << "If you wish to convert between kilograms and grams, press 3." << endl;
		cout << "If you wish to convert between Liters and mililiters, press 4." << endl;
		cout << "If you wish to convert between moles and grams, press 5." << endl;
		cout << "If you wish to convert between different unit of temperature, press 6." << endl;
		cout << "" << endl;

		cin >> choice;

		if(choice == 0)
		{
			break;
		}

		else if(choice == 1)
		{
			Pressure();
		}

		else if(choice == 2)
		{
			PotentialOfHydrogen();
		}

		else if(choice == 3)
		{
			GramsAndKilograms();
		}

		else if(choice == 4)
		{
			LitersAndMililiters();
		}

		else if(choice == 5)
		{
			GramsAndMoles();
		}

		else if(choice == 6)
		{
			Temperature();
		}

		else
		{
			cout << "You entered an invalid option." << endl;
		}

		//V1.clear();
		choice = 2;
	}

	return;
}

void InterfaceChemistryConversion::Pressure()
{
	double p1, p2, p3, p4, p5;
	int choice;
	cout << "\nIf you wish to convert from atm to mmHg, press 1." << endl;
	cout << "If you wish to convert from mmHg to atm, press 2." << endl;
	cout << "If you wish to convert from atm to kPa, press 3." << endl;
	cout << "If you wish to convert from kPa to atm, press 4." << endl;
	cout << "If you wish to convert from mmHg to kPa, press 5." << endl;
	cout << "If you wish to convert from kPa to mmHg, press 6." << endl;
	cin >> choice;

	if(choice == 1)
	{
		cout << "Please enter the pressure in terms of atm." << endl;
		cin >> p1;
		p3 = LCC->atm_to_mmHg(p1);
		cout << "Answer = " << p3 << " mmHg." << endl;
	}

	else if(choice == 2)
	{
		cout << "Please enter the pressure in terms of mmHg." << endl;
		cin >> p1;
		p3 = LCC->mmHg_to_atm(p1);
		cout << "Answer = " << p3 << " atm." << endl;
	}

	else if(choice == 3)
	{
		cout << "Please enter the pressure in terms of atm." << endl;
		cin >> p1;
		p3 = LCC->atm_to_kPa(p1);
		cout << "Answer = " << p3 << " kPa." << endl;
	}

	else if(choice == 4)
	{
		cout << "Please enter the pressure in terms of kPa." << endl;
		cin >> p1;
		p3 = LCC->kPa_to_atm(p1);
		cout << "Answer = " << p3 << " atm." << endl;
	}

	else if(choice == 5)
	{
		cout << "Please enter the pressure in terms of mmHg." << endl;
		cin >> p1;
		p3 = LCC->mmHg_to_kPa(p1);
		cout << "Answer = " << p3 << " kPa." << endl;
	}

	else if(choice == 6)
	{
		cout << "Please enter the pressure in terms of kPa." << endl;
		cin >> p1;
		p3 = LCC->kPa_to_mmHg(p1);
		cout << "Answer = " << p3 << " mmHg." << endl;
	}

	else
	{
		cout << "The option which you entered is invalid." << endl;
	}

	return;
}


void InterfaceChemistryConversion::PotentialOfHydrogen()
{
	double p1, p2, p3, p4, p5;
	int choice;
	cout << "\nIf you wish to convert from pH to pOH, press 1." << endl;
	cout << "If you wish to convert from pOH to pH, press 2." << endl;
	cin >> choice;

	if(choice == 1)
	{
		cout << "Please enter the pH." << endl;
		cin >> p1;
		p3 = LCC->pH_to_pOH(p1);
		cout << "Answer = " << p3 << endl;
	}

	else if(choice == 2)
	{
		cout << "Please enter the pOH." << endl;
		cin >> p1;
		p3 = LCC->pOH_to_pH(p1);
		cout << "Answer = " << p3 << endl;
	}

	else
	{
		cout << "The option which you entered is invalid." << endl;
	}

	return;
}


void  InterfaceChemistryConversion::GramsAndKilograms()
{
	double p1, p2, p3, p4, p5;
	int choice;
	cout << "\nIf you wish to convert from grams to kilograms, press 1." << endl;
	cout << "If you wish to convert from kilograms to grams, press 2." << endl;
	cin >> choice;

	if(choice == 1)
	{
		cout << "Please enter the number of grams." << endl;
		cin >> p1;
		p3 = LCC->g_to_kg(p1);
		cout << "Answer = " << p3 << " kg." << endl;
	}

	else if(choice == 2)
	{
		cout << "Please enter the number of kilograms." << endl;
		cin >> p1;
		p3 = LCC->kg_to_g(p1);
		cout << "Answer = " << p3 << " g." << endl;
	}

	else
	{
		cout << "The option which you entered is invalid." << endl;
	}

	return;
}


void InterfaceChemistryConversion::LitersAndMililiters()
{
	double p1, p2, p3, p4, p5;
	int choice;

	cout << "\nIf you wish to convert from Liters to mililiters, press 1." << endl;
	cout << "If you wish to convert from mililiters to Liters, press 2." << endl;
	cin >> choice;

	if(choice == 1)
	{
		cout << "Please enter the number of Liters." << endl;
		cin >> p1;
		//p3 = CL->L_to_mL(p1);
		p3 = LCC->L_to_mL(p1);
		cout << "Answer = " << p3 << " mL" << endl;
	}

	else if(choice == 2)
	{
		cout << "Please enter the number of mililiters." << endl;
		cin >> p1;
		//p3 = CL->mL_to_L(p1);
		p3 = LCC->mL_to_L(p1);
		cout << "Answer = " << p3 << " L" << endl;
	}

	else
	{
		cout << "The option which you entered is invalid." << endl;
	}

	return;
}


void InterfaceChemistryConversion::GramsAndMoles()
{
	double p1, p2, p3, p4, p5;
	int choice;
	vector<int> V1;

	cout << "\nIf you wish to convert from grams to moles, press 1." << endl;
	cout << "If you wish to convert from moles to grams, press 2." << endl;
	cin >> choice;

	if(choice == 1)
	{
		cout << "Please enter the number of grams to be converted to moles." << endl;
		cin >> p1;
		cout << "Please enter the atomic numbers.\n"
					<< "When you are done, enter any number less than 1.\n"
					<< "If you have something like KMnO4, enter the atomic number for K once,\n"
					<< "The atomic number for Mn once, and the atomic number for O four times." << endl;
		while(choice > 0)
		{
			cin >> choice;
			if(choice <= 0)
			{
				break;
			}
			V1.push_back(choice);
		}

		//p3 = CL->GramToMole(V1, p1);
		p3 = LCC->GramToMole(V1, p1);
		cout << "Answer = " << p3 << " moles." << endl;
	}

	else if(choice == 2)
	{
		cout << "Please enter the number of moles to be converted to grams." << endl;
		cin >> p1;
		cout << "Please enter the atomic numbers.\n"
					<< "When you are done, enter any number less than 1.\n"
					<< "If you have something like KMnO4, enter the atomic number for K once,\n"
					<< "The atomic number for Mn once, and the atomic number for O four times." << endl;
		while(choice > 0)
		{
			cin >> choice;
			if(choice <= 0)
			{
				break;
			}
			V1.push_back(choice);
		}
	
		//p3 = CL->MoleToGram(V1, p1);
		p3 = LCC->MoleToGram(V1, p1);
		cout << "Answer = " << p3 << " grams." << endl;
	}

	else
	{
		cout << "The option which you entered is invalid." << endl;
	}

	V1.clear();
	return;
}
//*********************************************************************************************
void InterfaceChemistryConversion::Temperature()
{
	double p1, p2;
	int choice = -1;
	while(choice != 0)
	{
		cout << "\nIf you wish to exit, press 0." << endl;
		cout << "If you wish to convert from Celsius to Fahrenheit, press 1." << endl;
		cout << "If you wish to convert from Fahrenheit to Celsius, press 2." << endl;
		cout << "If you wish to convert from Celsius to Kelvin, press 3." << endl;
		cout << "If you wish to convert from Kelvin to Celsius, press 4." << endl;
		cout << "If you wish to convert from Fahrenheit to Kelvin, press 5." << endl;
		cout << "If you wish to convert from Kelvin to Fahrenheit, press 6." << endl;
		cin >> choice;

		if(choice == 0)
		{
			break;
		}

		else if(choice == 1)
		{
			cout << "Please enter the temperature to be converted." << endl;
			cin >> p1;
			p2 = LCC->CtoF(p1);
			cout << "Answer = " << p2 << " F." << endl;
		}

		else if(choice == 2)
		{
			cout << "Please enter the temperature to be converted." << endl;
			cin >> p1;
			p2 = LCC->FtoC(p1);
			cout << "Answer = " << p2 << " C." << endl;
		}

		else if(choice == 3)
		{
			cout << "Please enter the temperature to be converted." << endl;
			cin >> p1;
			p2 = LCC->CtoK(p1);
			cout << "Answer = " << p2 << " K." << endl;
		}

		else if(choice == 4)
		{
			cout << "Please enter the temperature to be converted." << endl;
			cin >> p1;
			p2 = LCC->KtoC(p1);
			cout << "Answer = " << p2 << " C." << endl;
		}

		else if(choice == 5)
		{
			cout << "Please enter the temperature to be converted." << endl;
			cin >> p1;
			p2 = LCC->FtoK(p1);
			cout << "Answer = " << p2 << " K." << endl;
		}

		else if(choice == 6)
		{
			cout << "Please enter the temperature to be converted." << endl;
			cin >> p1;
			p2 = LCC->KtoF(p1);
			cout << "Answer = " << p2 << " F." << endl;
		}

		else
		{
			cout << "You selected an invalid option." << endl;
		}

	}

	return;
}

InterfaceChemistryConversion::~InterfaceChemistryConversion()
{

}
