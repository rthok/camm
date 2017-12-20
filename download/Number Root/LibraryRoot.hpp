#ifndef LibraryRoot_HPP
#define LibraryRoot_HPP

#include <iostream>
#include <vector> //So I can use a vector
using namespace std;

class LibraryRoot
{
	private:
		float floatTest;
		int intTest;
		vector<int> primeNumbers;
		vector<int> V1;
		int Radicand;
		int Coefficient;
		//Only functions inside the class can access private class functions.

	public:
		LibraryRoot();
		void InitializePrimeNumbers();
		vector<int> getPrime(int intVal);
		void CalcRoot(int LibraryRoot, int number);
		int getRadicand();
		int getCoefficient();
		~LibraryRoot();

};
# endif
