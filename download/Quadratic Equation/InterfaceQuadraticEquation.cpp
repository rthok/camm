#include "InterfaceQuadraticEquation.hpp"

InterfaceQuadraticEquation::InterfaceQuadraticEquation()
{
	LQE = new LibraryQuadraticEquation();
	return;
}

void InterfaceQuadraticEquation::InterfaceFunction()
{
	int choice = -1;
	int X1, X2, X3;
	while(choice != 0)
	{
		cout << "If you want to exit, press 0." << endl;
		cin >> choice;
		if(choice == 0)
		{
			return;
		}

		cout << "Please enter the coefficient to the X^2 term." << endl;
		cin >> X1;
		cout << "Please enter the coefficient to the X^1 term." << endl;
		cin >> X2;
		cout << "Please enter the coefficient to the X^0 term." << endl;
		cin >> X3;

		LQE->XVal(X1, X2, X3);
		cout << "x = " << LQE->getholder1() << ", " << LQE->getholder2() << endl;
	}

	return;
}

InterfaceQuadraticEquation::~InterfaceQuadraticEquation()
{

}
