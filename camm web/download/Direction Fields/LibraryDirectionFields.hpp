#ifndef LibraryDirectionFields_HPP
#define LibraryDirectionFields_HPP

#include <iostream>
#include <vector> //So I can use a vector
#include <cmath> //So I can use cos
using namespace std;

class LibraryDirectionFields
{
	private:
		//Only functions inside the class can access private class functions.

	public:
		LibraryDirectionFields();
		vector<float> run(vector<float> A, vector<int> keySequence);
		~LibraryDirectionFields();

};
# endif
