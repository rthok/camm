#include "LibraryDirectionFields.hpp"

LibraryDirectionFields::LibraryDirectionFields()
{
	return;
}



vector<float> LibraryDirectionFields::run(vector<float> A, vector<int> keySequence)
{
	vector<float> C;
	vector<float> B;
	//Generate the values to test the equation by. If the lines in A are 0, 2; then generate
	// -1, 1, 3
	for(int aa = 0; aa < (signed)A.size(); aa++)
	{
		if(aa == 0)
		{
			B.push_back(A[aa]-1);
		}
		else
		{
			B.push_back((A[aa-1]+A[aa])/2.0);
		}

		if(aa == (signed)(A.size()-1))
		{
			B.push_back(A[aa]+1);
		}
	}

	//float c;
	int flag = 0;
	float myFinal = 1;
	//float number;
	float current = 1;
	int checker = -1;

	vector<int> mySequence;
	mySequence = keySequence;
	int sequenceCounter = 0;

	//Determine what y' equals for each value in B.
	for(int i = 0; i < (signed)B.size(); i++)
	{
			//Go through the sequence. This while loop is for determining what y' = for the current
			// value in B.
			while(flag != 1 && sequenceCounter < (signed)mySequence.size())
			{
				checker = mySequence[sequenceCounter];
				sequenceCounter++;

				//The different options for the expression.
				if(checker == 1)
				{
					current = B[i] + mySequence[sequenceCounter];
					sequenceCounter++;
				}
				else if(checker == 2)
				{
					current = B[i] - mySequence[sequenceCounter];
					sequenceCounter++;
				}
				else if(checker == 3)
				{
					current = mySequence[sequenceCounter] - B[i];
					sequenceCounter++;
				}
				else if(checker == 4)
				{
					current = pow(current, mySequence[sequenceCounter]);
					sequenceCounter++;
				}
				else if(checker == 5)
				{
					current = mySequence[sequenceCounter] * B[i];
					sequenceCounter++;
				}
				else if(checker == 6)
				{
					myFinal *= current;
				}

				else
				{
					flag = 1;
				}
				
				
			}
		
		//Store the answer for each line in C
		C.push_back(myFinal);
		flag = 0;
		myFinal = 1;
		current = 1;
		sequenceCounter = 0;
	}
	
	return C;
}



LibraryDirectionFields::~LibraryDirectionFields()
{

}

