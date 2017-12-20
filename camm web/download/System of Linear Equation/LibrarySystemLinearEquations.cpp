#include "LibrarySystemLinearEquations.hpp"

LibrarySystemLinearEquations::LibrarySystemLinearEquations()
{
	return;
}


void LibrarySystemLinearEquations::FindXY(double X1, double Y1, double Ans1, double X2, double Y2, double Ans2)
{
	double finalX, finalY, finalAns;
	XX1 = X1;
	YY1 = Y1;
	AA1 = Ans1;
	XX2 = X2;
	YY2 = Y2;
	AA2 = Ans2;

//Security check.
	if(X1 ==0 && Y1 == 0 && Ans1 == 0)
	{
		//cout << "Error. Infinite Solutions (I think?)" << endl;
		//return -1.0;
		answerX = -111;
		answerY = -111;
		return;
	}

	else if(X1 == 0 && Y1 == 0 && Ans1 != 0)
	{
		//cout << "Error. No Solutions (I think?)" << endl;
		//return -1.0;
		answerX = -111;
		answerY = -111;
		return;
	}

	else if(X2 ==0 && Y2 == 0 && Ans2 == 0)
	{
		//cout << "Error. Infinite Solutions (I think?)" << endl;
		//return -1.0;
		answerX = -111;
		answerY = -111;
		return;
	}

	else if(X2 == 0 && Y2 == 0 && Ans2 != 0)
	{
		//cout << "Error. No Solutions (I think?)" << endl;
		//return -1.0;
		answerX = -111;
		answerY = -111;
		return;
	}

	else if(X1 == 0)
	{
		//cout << "Error! X1 is 0!" << endl;
		answerY = Ans1/(Y1/1.0);

		Y2 = Y2*answerY;
		Ans2 = Ans2 - Y2;
		answerX = Ans2/(X2/1.0);
	}

	else if(Y1 == 0)
	{
		//cout << "Error! Y1 is 0!" << endl;
		answerX = Ans1/(X1/1.0);

		X2 = X2 * answerX;
		Ans2 = Ans2 - X2;
		answerY = Ans2/(Y2/1.0);
	}

	else if(X2 == 0)
	{
		//cout << "Error! X2 is 0!" << endl;
		answerY = Ans2/(Y2/1.0);

		Y1 = Y1*answerY;
		Ans1 = Ans1 - Y1;
		answerX = Ans1/(X1/1.0);
	}

	else if(Y2 == 0)
	{
		//cout << "Error! Y2 is 0!" << endl;
		answerX = Ans2/(X2/1.0);

		X1 = X1*answerX;
		Ans1 = Ans1 - X1;
		answerY = Ans1/(Y1/1.0);
	}

	else
	{
		//Make sure don't get the int/int problem.
		double mult = 1.0/(X1/1.0);
		X1 *= mult;
		Y1 *= mult;
		Ans1 *= mult;	

		//Make sure that the first row is positive.
		if(X1 < 0)
		{
			X1 *= -1;
			Y1 *= -1;
			Ans1 *= -1;	
		}

		mult = 1.0/(X2/1.0);
		X2 *= mult;
		Y2 *= mult;
		Ans2 *= mult;	
		if(X2 > 0)
		{
			X2 *= -1;
			Y2 *= -1;
			Ans2 *= -1;	
		}

		finalX = X1 + X2; //This should be zero.
		finalY = Y1 + Y2;
		finalAns = Ans1 + Ans2;

		//This is to catch the infinite solutions case.
		if(finalX == 0 && finalY == 0 && finalAns == 0)
		{
			//cout << "Error! Infinite solutions." << endl;
			//return -1.0;
			answerX = -111;
			answerY = -111;
			return;
		}

		//This is to catch the no solutions case.
		if(finalX == 0 && finalY == 0 && finalAns != 0)
		{
			//cout << "There is no solution to this problem." << endl;
			//return -1.0;
			answerX = -111;
			answerY = -111;
			return;
		}

		answerY = finalAns/(finalY/1.0);

		//Find X
		X1 = XX1;
		Y1 = YY1;
		Ans1 = AA1;
		Y1 = Y1 * answerY;
		Ans1 = Ans1 - Y1;
		answerX = Ans1/(X1/1.0);
	}

	return;
}


double LibrarySystemLinearEquations::getXVal()
{
	return answerX;
}

double LibrarySystemLinearEquations::getYVal()
{
	return answerY;
}

double LibrarySystemLinearEquations::getXX1()
{
	return XX1;
}

double LibrarySystemLinearEquations::getYY1()
{
	return YY1;
}

double LibrarySystemLinearEquations::getAA1()
{
	return AA1;
}

double LibrarySystemLinearEquations::getXX2()
{
	return XX2;
}

double LibrarySystemLinearEquations::getYY2()
{
	return YY2;
}

double LibrarySystemLinearEquations::getAA2()
{
	return AA2;
}

LibrarySystemLinearEquations::~LibrarySystemLinearEquations()
{

}
