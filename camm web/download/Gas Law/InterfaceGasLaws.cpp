#include "InterfaceGasLaws.hpp"

InterfaceGasLaws::InterfaceGasLaws()
{
	LGL = new LibraryGasLaws();
	return;
}

void InterfaceGasLaws::InterfaceFunction()
{
	int choice = -1;
	while(choice != 0)
	{
		cout << "\nIf you wish to exit, press 0." << endl;
		cout << "If you wish to get pressure or volume using Boyle's Law, press 1." << endl;
		cout << "If you wish to get volume or temperature using Charles's Law, press 2." << endl;
		cout << "If you wish to get pressure or temperature using Amontons's Law, press 3." << endl;
		cout << "If you wish to get volume or number of moles using Avagadro's Law, press 4." << endl;
		cout << "If you wish to get the volume, pressure, temperature, or number of moles using the Ideal Gas Law, press 5." << endl;
		cout << "" << endl;

		cin >> choice;

		if(choice == 0)
		{
			break;
		}

		else if(choice == 1)
		{
			PrepareBoyle();
		}

		else if(choice == 2)
		{
			PrepareCharles();
		}

		else if(choice == 3)
		{
			PrepareAmontons();
		}

		else if(choice == 4)
		{
			PrepareAvagadro();
		}

		else if(choice == 5)
		{
			PrepareIdeal();
		}

		else
		{
			cout << "You didn't enter a valid option." << endl;
		}

		choice = 2;
	}

	return;
}


void InterfaceGasLaws::PrepareBoyle()
{
	double p1, p2, p3, p4, p5;

	cout << "For the pressure or volume which you don't know, enter -1." << endl;
	cout << "Please enter the initial pressure." << endl;
	cin >> p1;
	cout << "Please enter the initial volume." << endl;
	cin >> p2;
	cout << "Please enter the final pressure." << endl;
	cin >> p3;
	cout << "Please enter the final volume." << endl;
	cin >> p4;
	p3 = LGL->BoyleLaw(p1, p2, p3, p4);
	cout << "Answer = " << p3 << endl;

	return;
}

void InterfaceGasLaws::PrepareCharles()
{
	double p1, p2, p3, p4, p5;

	cout << "For the volume or temperature which you don't know, enter -1." << endl;
	cout << "Please enter the initial volume." << endl;
	cin >> p1;
	cout << "Please enter the initial temperature." << endl;
	cin >> p2;
	cout << "Please enter the final volume." << endl;
	cin >> p3;
	cout << "Please enter the final temperature." << endl;
	cin >> p4;
	p3 = LGL->CharlesLaw(p1, p2, p3, p4);
	cout << "Answer = " << p3 << endl;

	return;
}

void InterfaceGasLaws::PrepareAmontons()
{
	double p1, p2, p3, p4, p5;

	cout << "For the pressure or temperature which you don't know, enter -1." << endl;
	cout << "Please enter the initial pressure." << endl;
	cin >> p1;
	cout << "Please enter the initial temperature." << endl;
	cin >> p2;
	cout << "Please enter the final pressure." << endl;
	cin >> p3;
	cout << "Please enter the final temperature." << endl;
	cin >> p4;
	p3 = LGL->AmontonsLaw(p1, p2, p3, p4);
	cout << "Answer = " << p3 << endl;

	return;
}

void InterfaceGasLaws::PrepareAvagadro()
{
	double p1, p2, p3, p4, p5;

	cout << "For the volume or number of moles which you don't know, enter -1." << endl;
	cout << "Please enter the initial volume." << endl;
	cin >> p1;
	cout << "Please enter the initial number of moles." << endl;
	cin >> p2;
	cout << "Please enter the final volume." << endl;
	cin >> p3;
	cout << "Please enter the final number of moles." << endl;
	cin >> p4;
	p3 = LGL->AvagadroLaw(p1, p2, p3, p4);
	cout << "Answer = " << p3 << endl;

	return;
}

void InterfaceGasLaws::PrepareIdeal()
{
	double p1, p2, p3, p4, p5;

	cout << "For the value which you don't know, enter -1." << endl;
	cout << "It is your responsibility to make sure that the correct units are used." << endl;
	cout << "Please enter the pressure." << endl;
	cin >> p1;
	cout << "Please enter the volume." << endl;
	cin >> p2;
	cout << "Please enter the number of moles." << endl;
	cin >> p3;
	cout << "Please enter the gas constant." << endl;
	cin >> p4;
	cout << "Please enter the temperature." << endl;
	cin >> p5;
	p3 = LGL->IdealGasLaw(p1, p2, p3, p4, p5);
	cout << "Answer = " << p3 << endl;

	return;
}

InterfaceGasLaws::~InterfaceGasLaws()
{

}
