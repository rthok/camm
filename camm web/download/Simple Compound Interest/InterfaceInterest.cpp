#include "InterfaceInterest.hpp"

InterfaceInterest::InterfaceInterest()
{
	LI = new LibraryInterest();
	return;
}


void InterfaceInterest::InterfaceFunction()
{
	int choice = -1;
	double P1, P2, P3, P4;
	double answer;
	while(choice != 0)
	{
		cout << "\nIf you wish to leave, press 0." << endl;
		cout << "If you wish to deal with simple interest, press 1." << endl;
		cout << "If you wish to deal with compound interest, press 2." << endl;
		cin >> choice;
		if(choice == 0)
		{
			break;
		}

		else if(choice == 1)
		{
			cout << "Please enter the deposit or loan amount." << endl;
			cin >> P1;
			cout << "Please enter the rate." << endl;
			cin >> P2;
			cout << "If the rate is per year, enter the time in terms of years."
					<< " If it's in months, enter the time in months." << endl;
			cin >> P3;
			answer = LI->simpleInterest(P1, P2, P3);
			cout << answer << endl;
		}

		else if(choice == 2)
		{
			cout << "Please enter the deposit or loan amount." << endl;
			cin >> P1;
			cout << "Please enter the annual interest rate." << endl;
			cin >> P2;
			cout << "Please enter the number of times the interest is compounded per year." << endl;
			cin >> P3;
			cout << "Please enter the number of years the money is invested or borrowed for." << endl;
			cin >> P4;
			answer = LI->compoundInterest(P1, P2, P3, P4);
			cout << answer << endl;
		}

		else
		{
			cout << "You entered an invalid choice." << endl;
		}

	}

	return;
}


InterfaceInterest::~InterfaceInterest()
{

}
