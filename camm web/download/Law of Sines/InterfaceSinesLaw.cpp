#include "InterfaceSinesLaw.hpp"

InterfaceSinesLaw::InterfaceSinesLaw()
{
	LSL = new LibrarySinesLaw();
	return;
}


void InterfaceSinesLaw::getInterfaceAns()
{
	int shouldRun = 1;
	double answer, A1, A2, A3, A4;

	while(shouldRun == 1)
	{
		cout << "*********************************" << endl;
		cout << "For the side or angle you want the value of, enter 0." << endl;
		cout << "Please enter the first side." << endl;
		cin >> A1;
		cout << "Please enter the second side." << endl;
		cin >> A2;
		cout << "Please enter the first angle." << endl;
		cin >> A3;
		cout << "Please enter the second angle." << endl;
		cin >> A4;	

		answer = LSL->getAns(A1, A2, A3, A4);
		if(A1 == 0)
		{
			cout << "a = " << answer << endl;
		}
		else if(A2 == 0)
		{
			cout << "b = " << answer << endl;
		}
		else if(A3 == 0)
		{
			cout << "A = " << answer << endl;
		}
		else if(A4 == 0)
		{
			cout << "B = " << answer << endl;
		}
		else
		{
			cout << "An error has occured." << endl;
		}
	
		cout << "If you wish to stay, press 1. Press any other number to exit." << endl;
		cin >> shouldRun;
	}

	return;
}


InterfaceSinesLaw::~InterfaceSinesLaw()
{

}
