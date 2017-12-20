#ifndef LibraryRecurrenceRelation_HPP
#define LibraryRecurrenceRelation_HPP

#include <iostream>
#include <string>
#include <vector> //So I can use a vector
#include <cmath> //So I can use cos
#include "LibraryQuadraticEquation.hpp"
#include "LibrarySystemLinearEquations.hpp"
using namespace std;

class LibraryRecurrenceRelation
{
	private:
		//SolveX* SX;
		LibraryQuadraticEquation* LQE;
		LibrarySystemLinearEquations* LSLE;
		int C1;
		int C2;
		int C3;
		double X1;
		double X2;
		//Only functions inside the class can access private class functions.

	public:
		LibraryRecurrenceRelation();
		void Begin(string s1, string s2, double d1, double d2, double d3, double d4, int i1, int i2, int i3);
		~LibraryRecurrenceRelation();

};
# endif
