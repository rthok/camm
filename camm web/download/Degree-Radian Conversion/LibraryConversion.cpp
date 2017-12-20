#include "LibraryConversion.hpp"

LibraryConversion::LibraryConversion()
{
	return;
}


double LibraryConversion::getDegree(double A)
{
	return A*(180/3.14159);
}

double LibraryConversion::getRadian(double A)
{
	return A*(3.14159/180);
}

LibraryConversion::~LibraryConversion()
{

}
