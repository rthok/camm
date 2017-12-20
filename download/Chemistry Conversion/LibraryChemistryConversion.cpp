#include "LibraryChemistryConversion.hpp"

LibraryChemistryConversion::LibraryChemistryConversion()
{
	fill();
	return;
}

void LibraryChemistryConversion::fill()
{
	Elements[0] = -1;
	Elements[1]   = 1.0079;
	Elements[2]   = 4.0026;
	Elements[3]   = 6.941;
	Elements[4]   = 9.0122;
	Elements[5]   = 10.811;
	Elements[6]   = 12.0107;
	Elements[7]   = 14.0067;
	Elements[8]   = 15.9994;
	Elements[9]   = 18.9984;
	Elements[10]  = 20.1797;
	Elements[11]  = 22.9897;
	Elements[12]  = 24.305;
	Elements[13]  = 26.9815;
	Elements[14]  = 28.0855;
	Elements[15]  = 30.9738;
	Elements[16]  = 32.065;
	Elements[17]  = 35.453;
	Elements[18]  = 39.948;
	Elements[19]  = 39.0983;
	Elements[20]  = 40.078;
	Elements[21]  = 44.9559;
	Elements[22]  = 47.867;
	Elements[23]  = 50.9415;
	Elements[24]  = 51.9961;
	Elements[25]  = 54.938;
	Elements[26]  = 55.845;
	Elements[27]  = 58.9332;
	Elements[28]  = 58.6934;
	Elements[29]  = 63.546;
	Elements[30]  = 65.39;
	Elements[31]  = 69.723;
	Elements[32]  = 72.64;
	Elements[33]  = 74.9216;
	Elements[34]  = 78.96;
	Elements[35]  = 79.904;
	Elements[36]  = 83.8;
	Elements[37]  = 85.4678;
	Elements[38]  = 87.62;
	Elements[39]  = 88.9059;
	Elements[40]  = 91.224;
	Elements[41]  = 92.9064;
	Elements[42]  = 95.94;
	Elements[43]  = 98;
	Elements[44]  = 101.07;
	Elements[45]  = 102.9055;
	Elements[46]  = 106.42;
	Elements[47]  = 107.8682;
	Elements[48]  = 112.411;
	Elements[49]  = 114.818;
	Elements[50]  = 118.71;
	Elements[51]  = 121.76;
	Elements[52]  = 127.6;
	Elements[53]  = 126.9045;
	Elements[54]  = 131.293;
	Elements[55]  = 132.9055;
	Elements[56]  = 137.327;
	Elements[57]  = 138.9055;
	Elements[58]  = 140.116;
	Elements[59]  = 140.9077;
	Elements[60]  = 144.24;
	Elements[61]  = 145;
	Elements[62]  = 150.36;
	Elements[63]  = 151.964;
	Elements[64]  = 157.25;
	Elements[65]  = 158.9253;
	Elements[66]  = 162.5;
	Elements[67]  = 164.9303;
	Elements[68]  = 167.259;
	Elements[69]  = 168.9342;
	Elements[70]  = 173.04;
	Elements[71]  = 174.967;
	Elements[72]  = 178.49;
	Elements[73]  = 180.9479;
	Elements[74]  = 183.84;
	Elements[75]  = 186.207;
	Elements[76]  = 190.23;
	Elements[77]  = 192.217;
	Elements[78]  = 195.078;
	Elements[79]  = 196.9665;
	Elements[80]  = 200.59;
	Elements[81]  = 204.3833;
	Elements[82]  = 207.2;
	Elements[83]  = 208.9804;
	Elements[84]  = 209;
	Elements[85]  = 210;
	Elements[86]  = 222;
	Elements[87]  = 223;
	Elements[88]  = 226;
	Elements[89]  = 227;
	Elements[90]  = 232.0381;
	Elements[91]  = 231.0359;
	Elements[92]  = 238.0289;
	Elements[93]  = 237;
	Elements[94]  = 244;
	Elements[95]  = 243;
	Elements[96]  = 247;
	Elements[97]  = 247;
	Elements[98]  = 251;
	Elements[99]  = 252;
	Elements[100] = 257;
	Elements[101] = 258;
	Elements[102] = 259;
	Elements[103] = 262;
	Elements[104] = 261;
	Elements[105] = 262;
	Elements[106] = 266;
	Elements[107] = 264;
	Elements[108] = 277;
	Elements[109] = 268;
}


double LibraryChemistryConversion::getElementValue(int myElement)
{
	return Elements[myElement];
}


double LibraryChemistryConversion::GramToMole(vector<int> myElement, double A)
{
	double sum = 0;
	for(int i = 0; i < myElement.size(); i++)
	{
		sum += Elements[myElement[i]];
	}
	cout << "sum = " << sum << endl;
	return A/(sum/1.0);
}

double LibraryChemistryConversion::MoleToGram(vector<int> myElement, double A)
{
	double sum = 0;
	for(int i = 0; i < myElement.size(); i++)
	{
		sum += Elements[myElement[i]];
	}
	cout << "sum = " << sum << endl;

	return A * sum;
}

double LibraryChemistryConversion::L_to_mL(double A)
{
	return A*1000.0;
}

double LibraryChemistryConversion::mL_to_L(double A)
{
	return A/1000.0;
}

double LibraryChemistryConversion::atm_to_mmHg(double amount)
{
	return amount * 760.0;
}

double LibraryChemistryConversion::mmHg_to_atm(double amount)
{
	return amount/760.0;
}

double LibraryChemistryConversion::atm_to_kPa(double amount)
{
	return amount * 101.325;
}

double LibraryChemistryConversion::kPa_to_atm(double amount)
{
	return amount/101.325;
}

double LibraryChemistryConversion::mmHg_to_kPa(double amount)
{
	return atm_to_kPa(mmHg_to_atm(amount));
}

double LibraryChemistryConversion::kPa_to_mmHg(double amount)
{
	return atm_to_mmHg(kPa_to_atm(amount));
}

double LibraryChemistryConversion::g_to_kg(double amount)
{
	return amount/1000.0;
}

double LibraryChemistryConversion::kg_to_g(double amount)
{
	return amount*1000.0;
}

double LibraryChemistryConversion::pH_to_pOH(double amount)
{
	return 14 - amount;
}

double LibraryChemistryConversion::pOH_to_pH(double amount)
{
	return pH_to_pOH(amount);
}


double LibraryChemistryConversion::CtoF(double A)
{
	cout << "Celsius Temp of " << A << " equals Fahrenheit temp of " << ((A*1.8)+ 32) << endl;
	return ((A*1.8)+ 32);
}

double LibraryChemistryConversion::FtoC(double A)
{
	//cout << "Fahrenheit temp of " << A << " equals Celsius temp of " << (A-32)/1.8 << endl;
	return (A-32)/1.8;
}

double LibraryChemistryConversion::CtoK(double A)
{
	//cout << "Celcius temp of " << A << " equals Kelvin temp of " << A+273.15 << endl;
	return A+273.15;
}

double LibraryChemistryConversion::KtoC(double A)
{
	//cout << "Kelvin temp of " << A << " equals Celsius temp of " << A-273.15 << endl;
	return A-273.15;
}

double LibraryChemistryConversion::FtoK(double A)
{
	//cout << "Fahrenheit temp of " << A << " equals Kelvin temp of " << CtoK(FtoC(A)) << endl;
	return CtoK(FtoC(A));
}

double LibraryChemistryConversion::KtoF(double A)
{
	//cout << "Fahrenheit temp of " << A << " equals Kelvin temp of " << CtoK(FtoC(A)) << endl;
	return CtoF(KtoC(A));
}


LibraryChemistryConversion::~LibraryChemistryConversion()
{

}
