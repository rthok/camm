#include "LibrarySinesLaw.hpp"

LibrarySinesLaw::LibrarySinesLaw()
{
	LC = new LibraryConversion();
	return;
}


double LibrarySinesLaw::getAns(double a, double b, double A, double B)
{
	double answer;
	double temp1 = 0;
	//If both the angle A and side A are not equal to zero.
	if(a != 0 && A != 0)
	{
		//Solve for B
		if(b != 0)
		{	
			temp1 = b*sin(LC->getRadian(A));
			temp1 = temp1/a;
			temp1 = asin(temp1);
			answer = LC->getDegree(temp1);
		}

		//Solve for b
		else
		{	
			answer = a*(sin(LC->getRadian(B)))/sin(LC->getRadian(A));
		}
	}

	else
	{
		//Solve for A
		if(a != 0)
		{			
			temp1 = a*sin(LC->getRadian(B));
			temp1 = temp1/b;
			temp1 = asin(temp1);
			answer = LC->getDegree(temp1);
		}

		else
		{
			//Solve for a
			answer = b*(sin(LC->getRadian(A)))/sin(LC->getRadian(B));
		}
	}

	return answer;
}


LibrarySinesLaw::~LibrarySinesLaw()
{

}
