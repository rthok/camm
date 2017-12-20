#include "InterfaceConversion.hpp"

InterfaceConversion::InterfaceConversion()
{
	LC = new LibraryConversion();
	cout << "You entered the parent constructor, InterfaceConversion." << endl;
	return;
}


void InterfaceConversion::InterfaceFunction()
{
	int choice = 1;
	double value;
	
	while(choice != 0)
	{
		cout << "\nIf you want to exit, press 0." << endl;
		cout << "If you want to convert from Radian to Degree, press 1." << endl;
		cout << "If you want to convert from Degree to Radian, press 2." << endl;
		cin >> choice;
		
		if(choice == 0)
		{
			break;
		}
	
		else
		{
			cout << "Enter the value you want converted." << endl;
			cin >> value;
			if(choice == 1)
			{
				cout << LC->getDegree(value) << endl;
			}

			else if(choice == 2)
			{
				cout << LC->getRadian(value) << endl;
			}

			else
			{
				cout << "Sorry. You entered an invalid number." << endl;
			}
		}

	}

	return;
}


InterfaceConversion::~InterfaceConversion()
{

}
