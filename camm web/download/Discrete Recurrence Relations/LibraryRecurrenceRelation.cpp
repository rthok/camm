#include "LibraryRecurrenceRelation.hpp"

//Can't deal with cubes. You know, X^3.
LibraryRecurrenceRelation::LibraryRecurrenceRelation()
{
	LQE = new LibraryQuadraticEquation();
	LSLE = new LibrarySystemLinearEquations();
	return;
}

void LibraryRecurrenceRelation::Begin(string s1, string s2, double d1, double d2, double d3, double d4, int i1, int i2, int i3)
{

	string myVariable2 = s1;
	string myVariable = s2;
	double Val1 = d1;
	double Val2 = d2;
	double Val3 = d3;
	double Val4 = d4;
	C1 = i1;
	C2 = i2;
	C3 = i3;

	cout << C3 << "X^2 + " << C2 << "X + " << C1 << endl;
	LQE->XVal(C3, C2, C1);
	X1 = LQE->getholder1();
	X2 = LQE->getholder2();
	cout << "x1 = " << X1 << ", x2 = " << X2 << endl;
	cout << myVariable2 << "(" << myVariable << ") = a(" << X1 << ")^n + b(" << X2 << ")^" << myVariable << endl;

	if(X1 == X2)
	{
		LSLE->FindXY(pow(X1, Val1), (pow(X2, Val1))*Val1, Val2, pow(X1, Val3), (pow(X2, Val3))*Val3, Val4);
	}

	else
	{
		LSLE->FindXY(pow(X1, Val1), pow(X2, Val1), Val2, pow(X1, Val3), pow(X2, Val3), Val4);
	}

	cout << "a = " << LSLE->getXVal() << "; b = " << LSLE->getYVal() << endl;

	if(X1 == X2)
	{
		cout << myVariable2 << "(" << myVariable << ") = " << "("<< LSLE->getXVal() << ") * (" << X1 << ")^" << myVariable << " + (" << LSLE->getYVal() 
				<< ") * " << myVariable << " * (" << X2 << ")^" << myVariable << endl;
	}

	else
	{
		cout << myVariable2 << "(" << myVariable << ") = " << "("<< LSLE->getXVal() << ") * (" << X1 << ")^" << myVariable << " + (" << LSLE->getYVal() 
				<< ") * (" << X2 << ")^" << myVariable << endl;
	}

	return;
}


LibraryRecurrenceRelation::~LibraryRecurrenceRelation()
{

}
