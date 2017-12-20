#include "InterfaceSystemLinearEquations.hpp"

InterfaceSystemLinearEquations::InterfaceSystemLinearEquations()
{
	LSLE = new LibrarySystemLinearEquations();
	return;
}


void InterfaceSystemLinearEquations::InterfaceFunction()
{
	double stuff[6];
	int choice = -1;

	while(choice != 0)
	{
		cout << "\nIf you wish to leave, press 0" << endl;
		cin >> choice;
		if(choice == 0)
		{
			break;
		}

		cout << "Enter the coefficient to the first x." << endl;
		cin >> stuff[0];
		cout << "Enter the coefficient to the first y." << endl;
		cin >> stuff[1];
		cout << "Enter the first." << endl;
		cin >> stuff[2];
		cout << "Enter the coefficient to the second x." << endl;
		cin >> stuff[3];
		cout << "Enter the coefficient to the second y." << endl;
		cin >> stuff[4];
		cout << "Enter the second." << endl;
		cin >> stuff[5];
		LSLE->FindXY(stuff[0], stuff[1], stuff[2], stuff[3], stuff[4], stuff[5]);

		cout << "The answer is as follows for the two equations:" << endl;
		cout << LSLE->getXX1() << "x + " << LSLE->getYY1() << " = " << LSLE->getAA1() << endl;
		cout << LSLE->getXX2() << "x + " << LSLE->getYY2() << " = " << LSLE->getAA2() << endl;
		cout << "x = " << LSLE->getXVal() << endl;
		cout << "y = " << LSLE->getYVal() << endl;
	}

	return;
}

InterfaceSystemLinearEquations::~InterfaceSystemLinearEquations()
{

}
