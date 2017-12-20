#include "InterfaceCosinesLaw.hpp"

InterfaceCosinesLaw::InterfaceCosinesLaw()
{
	LCL = new LibraryCosinesLaw();
	return;
}


void InterfaceCosinesLaw::InterfaceFunction()
{
	double A1, A2, A3, A4, A5, A6;
	int shouldRun = 1;
	double answer;

	cout << "***************************" << endl;
	cout << "Note: in the case where you know the length of all the sides, and you" << endl;
	cout << "want an angle, and don't know the values of any of the angles, so as follows:" << endl;
	cout << "Enter zero for the angle you want. Enter some random non-zero value for the other two values." << endl;


	while(shouldRun == 1)
	{
		cout << "***************************" << endl;
		cout << "Please enter the value for a." << endl;
		cin >> A1;
		cout << "Please enter the value for b." << endl;
		cin >> A2;
		cout << "Please enter the value for c." << endl;
		cin >> A3;
		cout << "Please enter the value for A." << endl;
		cin >> A4;
		cout << "Please enter the value for B." << endl;
		cin >> A5;	
		cout << "Please enter the value for C." << endl;
		cin >> A6;

		answer = LCL->getAns(A1, A2, A3, A4, A5, A6);
		cout << "Answer = " << answer << endl;
	
		cout << "If you wish to stay, press 1. Press any other number to exit." << endl;	
		cin >> shouldRun;
	}

	return;
}


InterfaceCosinesLaw::~InterfaceCosinesLaw()
{

}
