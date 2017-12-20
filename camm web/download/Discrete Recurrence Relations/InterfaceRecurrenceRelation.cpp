#include "InterfaceRecurrenceRelation.hpp"

//Can't deal with cubes. You know, X^3.
InterfaceRecurrenceRelation::InterfaceRecurrenceRelation()
{
	LRR = new LibraryRecurrenceRelation();
	return;
}

void InterfaceRecurrenceRelation::InterfaceFunction()
{
	string myVariable = "";
	string myVariable2 = "";
	double Val1, Val2, Val3, Val4;
	int C1, C2, C3;

	int flag = -1;
	while(flag != 0)
	{

		cout << "If you wish to leave, press 0. Otherwise, press any other number." << endl;
		cin >> flag;
		if(flag == 0)
		{
			return;
		}

		cout << "Your equation should be a linear homogeneous recurrence relation of degree 2." << endl;
		cout << "The equation which you are viewing should be somewhat of the following format." << endl;
		cout << "Note: the parenthesis I am using are to indicate subscript." << endl;
		cout << "F(n) = 5F(n-1) + F(n-2)." << endl;
		cout << "If a term has no visible coefficients, that means its coefficent is 1." << endl;
		cout << "Please enter the variable your equation is using." << endl;
		cin >> myVariable;
		cout << "Please enter the function letter. In F(n), F is the function letter." << endl;
		cin >> myVariable2;
		cout << "Please enter the coefficient to the " << myVariable2 << "(" << myVariable << ") term." << endl;
		cin >> C3;
		C3 *= 1;
		cout << "Please enter the coefficent to the " << myVariable2 <<  "(" << myVariable << "-1) term." << endl;
		cin >> C2;
		C2 *= -1;
		cout << "Please enter the coefficent to the " << myVariable2 <<  "(" << myVariable << "-2) term." << endl;
		cin >> C1;
		C1 *= -1;
	
		cout << "At this point, you will have been given two solutions." << endl;
		cout << "I.e., the problem will have something like this: " << myVariable2 << " (0) = 45, " << myVariable2 << " (3) = 9." << endl;
		cout << "Enter the number representative of " << myVariable << ", of the first solution.\n "
				<< "In the above example, it would be 0." << endl;
		cin >> Val1;
		cout << "Enter the number it equals. In the above example, it would be 45." << endl;
		cin >> Val2;
	
		cout << "Enter the number representative of " << myVariable << ", of the second solution.\n "
				<< "In the above example, it would be 3." << endl;
		cin >> Val3;
		cout << "Enter the number is equals. In the above example, it would be 9." << endl;
		cin >> Val4;

		LRR->Begin(myVariable2, myVariable, Val1, Val2, Val3, Val4, C1, C2, C3);

	}

	return;
}


InterfaceRecurrenceRelation::~InterfaceRecurrenceRelation()
{

}
