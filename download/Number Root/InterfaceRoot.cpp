#include "InterfaceRoot.hpp"

InterfaceRoot::InterfaceRoot()
{
	p1 = new LibraryRoot();
	return;
}

void InterfaceRoot::InterfaceFunction()
{
	int option = -1;
	int Num1 = 0;
	int Num2 = 0;
	vector<int> jj;
	
	while(option != 0)
	{	
		cout << "If you wish to leave, enter 0." << endl;
		cout << "If you wish to get the prime constituants of a numbers, press 1." << endl;
		cout << "If you want to determine the root of a number, press 2." << endl;
		cin >> option;
		
		if(option == 0)
		{
			cout << "Goodbye." << endl;
		}

		else if(option == 1)
		{
			cout << "Please enter the number." << endl;
			cin >> Num1;

			jj = p1->getPrime(Num1);
			for(int i = 0; i < (signed)jj.size(); i++)
			{
				cout << jj[i] << endl;
			}
		}

		else if(option == 2)
		{
			cout << "Please enter the root." << endl;
			cin >> Num1;
			cout << "Please enter the number you want the root of." << endl;
			cin >> Num2;

			p1->CalcRoot(Num1, Num2);
			cout << p1->getCoefficient() << " * (" << p1->getRadicand() << ")^(1/" << Num1 << ")" << endl;
		}

		else
		{
			cout << "Sorry; you entered an invalid option." << endl;
		}

	}

	return;
}

InterfaceRoot::~InterfaceRoot()
{

}
