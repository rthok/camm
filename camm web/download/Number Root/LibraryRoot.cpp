#include "LibraryRoot.hpp"

LibraryRoot::LibraryRoot()
{
	//Fill the array with the prime numbers.
	InitializePrimeNumbers();

	floatTest = 0.0;
	intTest = 0;
	Radicand = 0;
	Coefficient = 0;
	return;
}

void LibraryRoot::InitializePrimeNumbers()
{
	/*
		My program will be able to correctly find the prime constituants 
		for any number less than 1,018,081. (1009^2)
	*/
	primeNumbers.push_back(2);
	primeNumbers.push_back(3);
	primeNumbers.push_back(5);
	primeNumbers.push_back(7);
	primeNumbers.push_back(11);
	primeNumbers.push_back(13);
	primeNumbers.push_back(17);
	primeNumbers.push_back(19);
	primeNumbers.push_back(23);
	primeNumbers.push_back(29);
	primeNumbers.push_back(31);
	primeNumbers.push_back(37);
	primeNumbers.push_back(41);
	primeNumbers.push_back(43);
	primeNumbers.push_back(47);
	primeNumbers.push_back(53);
	primeNumbers.push_back(59);
	primeNumbers.push_back(61);
	primeNumbers.push_back(67);
	primeNumbers.push_back(71);
	primeNumbers.push_back(73);
	primeNumbers.push_back(79);
	primeNumbers.push_back(83);
	primeNumbers.push_back(89);
	primeNumbers.push_back(97);
	primeNumbers.push_back(101);
	primeNumbers.push_back(103);
	primeNumbers.push_back(107);
	primeNumbers.push_back(109);
	primeNumbers.push_back(113);
	primeNumbers.push_back(127);
	primeNumbers.push_back(131);
	primeNumbers.push_back(137);
	primeNumbers.push_back(139);
	primeNumbers.push_back(149);
	primeNumbers.push_back(151);
	primeNumbers.push_back(157);
	primeNumbers.push_back(163);
	primeNumbers.push_back(167);
	primeNumbers.push_back(173);
	primeNumbers.push_back(179);
	primeNumbers.push_back(181);
	primeNumbers.push_back(191);
	primeNumbers.push_back(193);
	primeNumbers.push_back(197);
	primeNumbers.push_back(199);
	primeNumbers.push_back(211);
	primeNumbers.push_back(223);
	primeNumbers.push_back(227);
	primeNumbers.push_back(229);
	primeNumbers.push_back(233);
	primeNumbers.push_back(239);
	primeNumbers.push_back(241);
	primeNumbers.push_back(251);
	primeNumbers.push_back(257);
	primeNumbers.push_back(263);
	primeNumbers.push_back(269);
	primeNumbers.push_back(271);
	primeNumbers.push_back(277);
	primeNumbers.push_back(281);
	primeNumbers.push_back(283);
	primeNumbers.push_back(293);
	primeNumbers.push_back(307);
	primeNumbers.push_back(311);
	primeNumbers.push_back(313);
	primeNumbers.push_back(317);
	primeNumbers.push_back(331);
	primeNumbers.push_back(337);
	primeNumbers.push_back(347);
	primeNumbers.push_back(349);
	primeNumbers.push_back(353);
	primeNumbers.push_back(359);
	primeNumbers.push_back(367);
	primeNumbers.push_back(373);
	primeNumbers.push_back(379);
	primeNumbers.push_back(383);
	primeNumbers.push_back(389);
	primeNumbers.push_back(397);
	primeNumbers.push_back(401);
	primeNumbers.push_back(409);
	primeNumbers.push_back(419);
	primeNumbers.push_back(421);
	primeNumbers.push_back(431);
	primeNumbers.push_back(433);
	primeNumbers.push_back(439);
	primeNumbers.push_back(443);
	primeNumbers.push_back(449);
	primeNumbers.push_back(457);
	primeNumbers.push_back(461);
	primeNumbers.push_back(463);
	primeNumbers.push_back(467);
	primeNumbers.push_back(479);
	primeNumbers.push_back(487);
	primeNumbers.push_back(491);
	primeNumbers.push_back(499);
	primeNumbers.push_back(503);
	primeNumbers.push_back(509);
	primeNumbers.push_back(521);
	primeNumbers.push_back(523);
	primeNumbers.push_back(541);
	primeNumbers.push_back(547);
	primeNumbers.push_back(557);
	primeNumbers.push_back(563);
	primeNumbers.push_back(569);
	primeNumbers.push_back(571);
	primeNumbers.push_back(577);
	primeNumbers.push_back(587);
	primeNumbers.push_back(593);
	primeNumbers.push_back(599);
	primeNumbers.push_back(601);
	primeNumbers.push_back(607);
	primeNumbers.push_back(613);
	primeNumbers.push_back(617);
	primeNumbers.push_back(619);
	primeNumbers.push_back(631);
	primeNumbers.push_back(641);
	primeNumbers.push_back(643);
	primeNumbers.push_back(647);
	primeNumbers.push_back(653);
	primeNumbers.push_back(659);
	primeNumbers.push_back(661);
	primeNumbers.push_back(673);
	primeNumbers.push_back(677);
	primeNumbers.push_back(683);
	primeNumbers.push_back(691);
	primeNumbers.push_back(701);
	primeNumbers.push_back(709);
	primeNumbers.push_back(719);
	primeNumbers.push_back(727);
	primeNumbers.push_back(733);
	primeNumbers.push_back(739);
	primeNumbers.push_back(743);
	primeNumbers.push_back(751);
	primeNumbers.push_back(757);
	primeNumbers.push_back(761);
	primeNumbers.push_back(769);
	primeNumbers.push_back(773);
	primeNumbers.push_back(787);
	primeNumbers.push_back(797);
	primeNumbers.push_back(809);
	primeNumbers.push_back(811);
	primeNumbers.push_back(821);
	primeNumbers.push_back(823);
	primeNumbers.push_back(827);
	primeNumbers.push_back(829);
	primeNumbers.push_back(839);
	primeNumbers.push_back(853);
	primeNumbers.push_back(857);
	primeNumbers.push_back(859);
	primeNumbers.push_back(863);
	primeNumbers.push_back(877);
	primeNumbers.push_back(881);
	primeNumbers.push_back(883);
	primeNumbers.push_back(887);
	primeNumbers.push_back(907);
	primeNumbers.push_back(911);
	primeNumbers.push_back(919);
	primeNumbers.push_back(929);
	primeNumbers.push_back(937);
	primeNumbers.push_back(941);
	primeNumbers.push_back(947);
	primeNumbers.push_back(953);
	primeNumbers.push_back(967);
	primeNumbers.push_back(971);
	primeNumbers.push_back(977);
	primeNumbers.push_back(983);
	primeNumbers.push_back(991);
	primeNumbers.push_back(997);
}


vector<int> LibraryRoot::getPrime(int intVal)
{
	//Need to clear the vector, otherwise each time this function is called,
	//The vector will get more and more numbers.
	V1.clear();
	floatTest = 0.0;
	intTest = 0;
	
	int j = 0;

	//The second clause in this while loop ensures that the loop will not check
	//numbers greater than what intVal currently is. This means that I can have far more
	//values in the primeNumbers array, without slowing down the loop for calculating values
	//such as 8.
	while(j < (signed)primeNumbers.size()/*46*/ && intVal > primeNumbers[j])
	{
		//Get the answer of dividing an int by an int. (Won't get any decimal)
		intTest = intVal/primeNumbers[j];
		//Convert the int into a float.
		floatTest = primeNumbers[j]/1.0;
		//Divide int by a float to get a float answer.
		floatTest = intVal/floatTest;

		//If the float and the int are the same, then it divided cleanly.
		//In other words, if the division didn't have any remainder, but was a whole number.
		if(intTest == floatTest)
		{
			//Store the prime in the vector.
			V1.push_back(primeNumbers[j]);
			//Decrease intVal for the next pass.
			intVal = intVal/primeNumbers[j];
			//Set j to -1. Basically, resetting the for loop. This is necessary for stuff
			//like 8, where you want 2*2*2. Reset is completely necessary.
			j -= 1;
		}
		
		//The commented-out line below was for showing how many times the while loop looped,
		//to demonstrate that it wasn't going through the entire vector, unless the number was
		//Indivisible by any number in the vector.
		//cout << "*";
		j++;
	}

	//When the for loop is finished, intVal should equal 1. To make sure nothing wrong has 
	//happened, if intVal is greater than 1, store contents of intVal in vector.
	if(intVal > 1)
	{
		V1.push_back(intVal);
		//cout << "Almost slipped through the cracks." << endl;
	}

	return V1;
}

void LibraryRoot::CalcRoot(int LibraryRoot, int number)
{
	int inside = 1;
	int outside = 1;
	vector<int> kl;
	kl = getPrime(number);

	int flag = 0;

	for(int k = 0; k < (signed)kl.size(); k++)
	{

		for(int i = 0; i < (LibraryRoot-1); i++)
		{
			//If the two current numbers are the same, continue
			if(kl[i+k] == kl[i+k+1])
			{
				flag = 1;
			}

			//Root won't work for current number.
			else
			{
				flag = -1;
				break;
			}
		}

		//If the number didn't appear LibraryRoot number of times.
		if(flag == -1)
		{
			//As long as the current entry is not null.
			if(kl[k] != -1)
			{
				//This number can't get out the root. Multiply it by the other numbers that will stay
				//in the root.
				inside *= kl[k];
				//Set the current entry to null.
				kl[k] = -1;
			}
		}

		else
		{
			//The number appeared enough times that it can get out of the root.
			//Multiply it by the other number outside of the root.
			outside *= kl[k];

			//Set it to null in the vector. For square root, set the current, and next values to null.
			for(int i = 0; i < LibraryRoot; i++)
			{
				kl[i+k] = -1;
			}

			//Move the counter, so that for the next loop, will start on a non-null value.
			for(int i = 1; i < LibraryRoot; i++)
			{
				k++;
			}

		}

		flag = 0;
	}

	Radicand = inside;
	Coefficient = outside;

	return;
}

int LibraryRoot::getRadicand()
{
	return Radicand;
}

int LibraryRoot::getCoefficient()
{
	return Coefficient;
}

LibraryRoot::~LibraryRoot()
{

}
