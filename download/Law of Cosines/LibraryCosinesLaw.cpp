#include "LibraryCosinesLaw.hpp"

LibraryCosinesLaw::LibraryCosinesLaw()
{
	LC = new LibraryConversion();
	return;
}


double LibraryCosinesLaw::getAns(double a, double b, double c, double A, double B, double C)
{
	double answer;
	double temp1 = 0;
	double temp2 = 0;
	double temp3 = 0;

	//Solving for a
	if(a == 0 && b != 0 && c != 0 && A != 0)
	{
		temp1 = pow(b, 2.0); //b^2;
		temp2 = pow(c, 2.0); // c^2;
		temp1 += temp2;
		temp2 = -2*b*c;
		temp3 = cos(LC->getRadian(A));
		temp2 *= temp3;
		temp1 += temp2;
		temp1 = sqrt(temp1);
		answer = temp1;
	}

	//Solving for b
	else if(b == 0 && a != 0 && c != 0 && B != 0)
	{
		temp1 = pow(a, 2.0); //b^2;
		temp2 = pow(c, 2.0); // c^2;
		temp1 += temp2;
		temp2 = -2*a*c;
		temp3 = cos(LC->getRadian(B));
		temp2 *= temp3;
		temp1 += temp2;
		temp1 = sqrt(temp1);
		answer = temp1;
	}

	//Solving for c
	else if (c == 0 && a != 0 && b != 0 && C != 0)
	{
		temp1 = pow(a, 2.0); //b^2;
		temp2 = pow(b, 2.0); // c^2;
		temp1 += temp2;
		temp2 = -2*a*b;
		temp3 = cos(LC->getRadian(C));
		temp2 *= temp3;
		temp1 += temp2;
		temp1 = sqrt(temp1);
		answer = temp1;
	}

	//Right now, for this case, I enter 1 for the angles I don't want to know.
	//Solving for A
	else if(a != 0 && b != 0 && c != 0 && A == 0)
	{
		temp1 = pow(b, 2.0) + pow(c, 2.0) - pow(a, 2.0);
		temp1 = temp1/(2*b*c);
		temp1 = acos(temp1)*(180/3.14159);
		answer = temp1;
	}

	//Solving for B
	else if(a != 0 && b != 0 && c != 0 && B == 0)
	{
		temp1 = pow(c, 2.0) + pow(a, 2.0) - pow(b, 2.0);
		temp1 = temp1/(2*c*a);
		temp1 = acos(temp1)*(180/3.14159);
		answer = temp1;
	}

	//Solving for C
	else if(a != 0 && b != 0 && c != 0 && C == 0)
	{
		temp1 = pow(a, 2.0) + pow(b, 2.0) - pow(c, 2.0);
		temp1 = temp1/(2*a*b);
		temp1 = acos(temp1)*(180/3.14159);
		answer = temp1;
	}

	else
	{
		answer = -1;
	}

	return answer;
}


LibraryCosinesLaw::~LibraryCosinesLaw()
{

}
