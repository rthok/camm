#include "LibrarySumOfAngles.hpp"

LibrarySumOfAngles::LibrarySumOfAngles()
{
	return;
}


double LibrarySumOfAngles::getAns(double A, double B)
{
	//All three angles of a triangle add up to 180 degrees.
	return 180-(A+B);
}


LibrarySumOfAngles::~LibrarySumOfAngles()
{

}
