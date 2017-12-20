#include "LibraryTrigArea.hpp"

LibraryTrigArea::LibraryTrigArea()
{
	current = 0, s = 0, block1 = 0, block2 = 0, block3 = 0;
	LC = new LibraryConversion();
	return;
}

double LibraryTrigArea::HeronFormula(double a, double b, double c)
{
	//double current;
	//double s, block1, block2, block3, answer;
	double answer;
	
	if(a <= 0 || b <= 0 || c <= 0)
	{
		//cout << "An error has occurred! No side is allowed to be negative or zero." << endl;
		return -1.0;
	}

	s = .5*(a+b+c);
	block1 = s - a;
	block2 = s - b;
	block3 = s - c;

	//For dealing with the Impossible Side Lengths, due to Triangle Inequality Theorem.
	if(block1 <= 0 || block2 <= 0 || block3 <= 0)
	{
		return -1;
	}
	
	//current will now be the number inside of the square root.
	current = s * block1 * block2 * block3;
	answer = sqrt(current);
	
	return answer;
}

double LibraryTrigArea::SideAngleSideFormula(double side1, double side2, double angle1, int radian)
{
	double answer;
	
	current = .5 * side1 * side2;

	//If the value in angle1 is in radians
	if(radian == 1)
	{
		answer = current * sin(angle1);
	}

	//Answer was given in degrees
	else
	{
		answer = current * sin(LC->getRadian(angle1));
	}

	//answer = current; 
	return answer;
}


double LibraryTrigArea::getcurrent()
{
	return current;
}

double LibraryTrigArea::gets()
{
	return s;
}

double LibraryTrigArea::getblock1()
{
	return block1;
}

double LibraryTrigArea::getblock2()
{
	return block2;
}

double LibraryTrigArea::getblock3()
{
	return block3;
}

LibraryTrigArea::~LibraryTrigArea()
{

}
