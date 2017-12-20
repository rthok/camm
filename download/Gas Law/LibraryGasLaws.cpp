#include "LibraryGasLaws.hpp"

LibraryGasLaws::LibraryGasLaws()
{
	return;
}

//The variable that is unknown should contain -1.
double LibraryGasLaws::BoyleLaw(double P1, double V1, double P2, double V2)
{
	double answer;
	if(P1 <= -1)
	{
		answer = P2*V2;
		answer = answer/(V1/1.0);
	}

	else if(V1 <= -1)
	{
		answer = P2*V2;
		answer = answer/(P1/1.0);
	}

	else if(P2 <= -1)
	{
		answer = P1*V1;
		answer = answer/(V2/1.0);
	}

	//V2 == -1
	else
	{
		answer = P1*V1;
		answer = answer/(P2/1.0);
	}

	return answer;
}


double LibraryGasLaws::CharlesLaw(double V1, double T1, double V2, double T2)
{
	double answer;
	if(V1 <= -1)
	{
		answer = V2*T1;
		answer = answer/(T1/1.0);
	}

	else if(T1 <= -1)
	{
		answer = V1*T2;
		answer = answer/(V2/1.0);
	}

	else if(V2 <= -1)
	{
		answer = V1*T2;
		answer = answer/(T1/1.0);
	}

	//T2 == -1
	else
	{
		answer = V2*T1;
		answer = answer/(V1/1.0);
	}

	return answer;
}


double LibraryGasLaws::AmontonsLaw(double P1, double T1, double P2, double T2)
{
	double answer;
	if(P1 <= -1)
	{
		answer = P2*T1;
		answer = answer/(T1/1.0);
	}

	else if(T1 <= -1)
	{
		answer = P1*T2;
		answer = answer/(P2/1.0);
	}

	else if(P2 <= -1)
	{
		answer = P1*T2;
		answer = answer/(T1/1.0);
	}

	//T2 == -1
	else
	{
		answer = P2*T1;
		answer = answer/(P1/1.0);
	}

	return answer;
}


double LibraryGasLaws::AvagadroLaw(double V1, double n1, double V2, double n2)
{
	double answer;
	if(V1 <= -1)
	{
		answer = V2*n1;
		answer = answer/(n2/1.0);
	}

	else if(n1 <= -1)
	{
		answer = V1*n2;
		answer = answer/(V2/1.0);
	}

	else if(V2 <= -1)
	{
		answer = V1*n2;
		answer = answer/(n1/1.0);
	}

	//n2 == -1
	else
	{
		answer = V2*n1;
		answer = answer/(V1/1.0);
	}

	return answer;
}

double LibraryGasLaws::IdealGasLaw(double P, double V, double n, double R, double T)
{
	double answer;
	if(P == -1)
	{
		answer = n*R*T;
		answer = answer/(V/1.0);
	}

	else if(V == -1)
	{
		answer = n*R*T;
		answer = answer/(P/1.0);
	}

	else if(n == -1)
	{
		answer = P*V;
		answer = answer/(R/1.0);
		answer = answer/(T/1.0);
	}

	else if(R == -1)
	{
		answer = P*V;
		answer = answer/(n/1.0);
		answer = answer/(T/1.0);
	}

	else if(T == -1)
	{
		answer = P*V;
		answer = answer/(n/1.0);
		answer = answer/(R/1.0);
	}

	else
	{
		return -1.0;
	}

	return answer;
}

LibraryGasLaws::~LibraryGasLaws()
{

}
