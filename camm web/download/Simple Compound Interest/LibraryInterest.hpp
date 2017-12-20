#ifndef LibraryInterest_HPP
#define LibraryInterest_HPP

#include <iostream>
#include <cmath>
using namespace std;

class LibraryInterest
{
	private:
		//Only functions inside the class can access private class functions.

	public:
		LibraryInterest();
		double simpleInterest(double P, double r, double t);
		double compoundInterest(double P, double r, double n, double t);
		~LibraryInterest();

};
# endif
