#ifndef LibrarySystemLinearEquations_HPP
#define LibrarySystemLinearEquations_HPP

#include <iostream>
#include <vector> //So I can use a vector
#include <cmath> //So I can use cos
using namespace std;

class LibrarySystemLinearEquations
{
	private:
		double answerX, answerY;
		double XX1, YY1, AA1, XX2, YY2, AA2;
		//Only functions inside the class can access private class functions.

	public:
		LibrarySystemLinearEquations();
		void FindXY(double A, double B, double C, double D, double E, double F);
		double getXVal();
		double getYVal();
		double getXX1();
		double getYY1();
		double getAA1();
		double getXX2();
		double getYY2();
		double getAA2();
		~LibrarySystemLinearEquations();

};
# endif
