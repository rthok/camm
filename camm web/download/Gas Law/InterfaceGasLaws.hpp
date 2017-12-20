#ifndef InterfaceGasLaws_HPP
#define InterfaceGasLaws_HPP

#include <iostream>
#include <cmath> //So I can use cos
#include "LibraryGasLaws.hpp"
using namespace std;

class InterfaceGasLaws
{
	private:
		LibraryGasLaws* LGL;
		//Only functions inside the class can access private class functions.

	public:
		InterfaceGasLaws();
		void InterfaceFunction();
		void PrepareBoyle();
		void PrepareCharles();
		void PrepareAmontons();
		void PrepareAvagadro();
		void PrepareIdeal();
		~InterfaceGasLaws();

};
# endif
