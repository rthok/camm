#include "InterfaceSumOfAngles.hpp"

InterfaceSumOfAngles::InterfaceSumOfAngles()
{
	LSOA = new LibrarySumOfAngles();
}


void InterfaceSumOfAngles::InterfaceFunction()
{
	double A1, A2;
	int shouldRun = 1;
	double answer;

	while(shouldRun == 1)
	{
		cout << "*********************************" << endl;
		cout << "Please enter the first angle." << endl;
		cin >> A1;
		cout << "Please enter the second angle." << endl;
		cin >> A2;
	
		answer = LSOA->getAns(A1, A2);
		cout << "The third angle = " << answer << endl;
		
		cout << "If you wish to stay, press 1. Press any other number to exit." << endl;
		cin >> shouldRun;
	}
	return;
}


InterfaceSumOfAngles::~InterfaceSumOfAngles()
{

}
