#include "LibraryInterest.hpp"

LibraryInterest::LibraryInterest()
{
	return;
}


double LibraryInterest::simpleInterest(double P, double r, double t)
{
	double holder;
	holder = 1 + (r/100.0)*t;
	holder *= P;
	return holder;
}


double LibraryInterest::compoundInterest(double P, double r, double n, double t)
{
	double holder;
	double power;
	holder = (r/100.0)/(n/1.0);
	holder += 1;
	power = n*(t);
	holder = pow(holder, power);
	holder *= P;
	return holder;
}


LibraryInterest::~LibraryInterest()
{

}
