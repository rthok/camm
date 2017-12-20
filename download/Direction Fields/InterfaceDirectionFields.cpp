#include "InterfaceDirectionFields.hpp"

InterfaceDirectionFields::InterfaceDirectionFields()
{
	LDF = new LibraryDirectionFields();
	return;
}



void InterfaceDirectionFields::InterfaceFunction()
{
	vector<float> C;
	vector<int> keySequence;

	char myVariable = 'y';
	cout << "Please enter the variable being used. (x or y, or z.)" << endl;
	cin >> myVariable;
	vector<float> A;
	int flagComing = 0;
	float temp1;
	cout << "Please enter the lines (y= 0, for example), in ascending order." << endl;
	while(flagComing != 1)
	{
		cout << "If you are done enter values, press 1." << endl;
		cin >> flagComing;
		if(flagComing != 1)
		{
			cout << "Enter the next number." << endl;
			cin >> temp1;
			A.push_back(temp1);
		}
	}

	
	keySequence = keyStroke();

	C = LDF->run(A, keySequence);

	cout << "Values are = ";
	for(int bb = 0; bb < (signed)C.size(); bb++)
	{
		cout << C[bb] << ", ";
	}

	cout << "" << endl;
	for(int cc = 0; cc < (signed)A.size(); cc++)
	{
		if((C[cc] > 0 && C[cc+1] < 0))
		{
			cout << "There is a convergence at " << myVariable << " = " << A[cc] << endl;
		}

		else
		{
			cout << "There is a divergence at " << myVariable << " = " << A[cc] << endl;
		}
	}

}


vector<int> InterfaceDirectionFields::keyStroke()
{
	vector<int> KS;
	cout << "Welcome to keyStroke, a function designed to enhance your experience with DirectionFields." << endl;


	//float c;
	int flag = 0;
	float myFinal = 1;
	float number;
	float current = 1;
	int checker = -1;

	while(flag != 1)
	{
		cout << "myFinal = " << myFinal << endl;
		cout << "Here are the options.\n1. If the variable is added to a number, press 1.\n"
					<<"2. If the variable is subtracted by a number, press 2.\n"
					<< "3. If a number is subtracted by the variable, press 3.\n"
					<< "4. If you are finished with the inside of the chunk, but it's raised to a power, press 4.\n" 
					<< "5. If the variable is multiplied by a number, press 5.\n" 
					<< "6. If you are finished with the chunk, press 6.\n" 
					<< "7. When you are done with the equation, press 7."<< endl;
		cin >> checker;
		KS.push_back(checker);
		if(checker == 1)
		{
			cout << "Please enter the number." << endl;
			cin >> number;
			KS.push_back(number);
		}
		else if(checker == 2)
		{
			cout << "Please enter the number." << endl;
			cin >> number;
			KS.push_back(number);
		}
		else if(checker == 3)
		{
			cout << "Please enter the number." << endl;
			cin >> number;
			KS.push_back(number);
		}
		else if(checker == 4)
		{
			cout << "Please enter the number." << endl;
			cin >> number;
			KS.push_back(number);
		}
		else if(checker == 5)
		{
			cout << "Please enter the number." << endl;
			cin >> number;
			KS.push_back(number);
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

	return KS;
}

InterfaceDirectionFields::~InterfaceDirectionFields()
{

}

