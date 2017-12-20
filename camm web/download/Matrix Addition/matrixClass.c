#include "matrixClass.h"

matrixClass::matrixClass()
{
  intR = 0;
  intRow = 0; intColumn = 0;
  intCounter = 1;
}

matrixClass::matrixClass(int i)
{
  intR = i;
  intCounter = 1;
  //printf("value in i is now: %d\n", i);
}

//The answer is stored in A1
vector<int> matrixClass::matrixAddition(vector<int> A1, vector<int> A2)
{
  if(A1.size() != A2.size())
  {
    cout << "The vectors are not the same size." << endl;
  }

  else
  {
    for(int i = 0; i < A1.size(); i++)
    {
      A1[i] = A1[i] + A2[i];
    }
  }

  return A1;
}

vector<int> matrixClass::matrixAdditionUI()
{
  vector<int> N1;
  vector<int> N2;
  int intAmmount;
  int intHold;

  cout << "Please enter the number of elements in the matrix." << endl;
  cin >> intAmmount;
  
  cout << "Please enter the values of the first matrix" << endl;
  for(int i = 0; i < intAmmount; i++)
  {
    cout << "Please enter number #" << i+1<< endl;
    cin >> intHold;
    N1.push_back(intHold);
  }

  cout << "\nPlease enter the values of the second matrix" << endl;
  for(int i = 0; i < intAmmount; i++)
  {
    cout << "Please enter number #" << i+1 << endl;
    cin >> intHold;
    N2.push_back(intHold);
  }
  cout << "\n" << endl;

  return matrixAddition(N1, N2);

}

vector<int> matrixClass::matrixSubtraction(vector<int> A1, vector<int> A2)
{
  if(A1.size() != A2.size())
  {
    cout << "The vectors are not the same size." << endl;
  }

  else
  {
    for(int i = 0; i < A1.size(); i++)
    {
      A1[i] = A1[i] - A2[i];
    }
  }

  return A1;
}

vector<int> matrixClass::matrixSubtractionUI()
{
  vector<int> N1;
  vector<int> N2;
  int intAmmount;
  int intHold;

  cout << "Please enter the number of elements in the matrix." << endl;
  cin >> intAmmount;
  
  cout << "Please enter the values of the first matrix" << endl;
  for(int i = 0; i < intAmmount; i++)
  {
    cout << "Please enter number #" << i+1<< endl;
    cin >> intHold;
    N1.push_back(intHold);
  }

  cout << "\nPlease enter the values of the second matrix" << endl;
  for(int i = 0; i < intAmmount; i++)
  {
    cout << "Please enter number #" << i+1 << endl;
    cin >> intHold;
    N2.push_back(intHold);
  }
  cout << "\n" << endl;

  return matrixSubtraction(N1, N2);

}

vector<float> matrixClass::matrixMultiplicationConstant(vector<float> A1, int m)
{
  for(int i = 0; i < A1.size(); i++)
  {
    A1[i] = A1[i] * m;
  }

  /*for(int i = 0; i < A1.size(); i++)
  {
   cout << A1[i] << endl;
  }*/
  return A1;
}

vector<float> matrixClass::matrixMultiplicationConstantUI()
{
  vector<float> N1;
  int intLoop;
  int intCons;
  float temp;
 
  cout << "Please enter the number of values in the matrix." << endl;
  cin >> intLoop;
  
  for(int i = 0; i < intLoop; i++)
  {
    cout << "Please enter number #" << i << endl;
    cin >> temp;
    N1.push_back(temp);
  }

  cout << "Please enter the number to multiply the vector by." << endl;
  cin >> intCons;
  cout << endl;
  N1 = matrixMultiplicationConstant(N1, intCons);
  return N1;
}

int matrixClass::matrixDeterminant(vector<int> A1)//Only for 2x2 matrix
{
  return ((A1[0] * A1[3]) - (A1[1]* A1[2]));
}

int matrixClass::matrixDeterminantUI()
{
  vector<int> N1;
  int intHolder;
  cout << "Please enter the four integer values for the matrix." << endl;

  for(int i = 0; i < 4; i++)
  {
    cout << "Please enter number #" << i+1 << endl;
    cin >> intHolder;
    N1.push_back(intHolder);
  }
  
  return matrixDeterminant(N1);
}

vector<float> matrixClass::matrixInverse(vector<int> A1)
{
  int store1, store2;
  vector<float> V1;
  int Determinant = matrixDeterminant(A1);

  if(Determinant == 0)
  {
    cout << "ERROR! The inverse cannot be found." << endl;
    return V1;
  }

  store1 = A1[0];
  store2 = A1[3];
  A1[0] = store2;
  A1[3] = store1;
  A1[1] = -1*A1[1];
  A1[2] = -1*A1[2];
  //double testing = A1[0] /10;
  //cout << "This is a double: "<< testing << endl;
  /*for(int i = 0; i < 4; i++)
  {
    cout << A1[i] << endl;
  }

  cout << "\n\n" << endl;
  cout << Determinant << endl;*/
  for(int i = 0; i < 4; i++)
  {
    //printf("%f\n", (A1[i]/Determinant));
    V1.push_back(A1[i]/(Determinant + .0));
  }

  //cout << "Reached this point." << endl;
  /*for(int i = 0; i < 4; i++)
  {
    cout << V1[i] << endl;
  }*/


  return V1;
}

vector<float> matrixClass::matrixInverseUI()
{  
  vector<int> N1;
  int intHolder;
  cout << "Please enter the four integer values for the matrix." << endl;

  for(int i = 0; i < 4; i++)
  {
    cout << "Please enter number #" << i+1 << endl;
    cin >> intHolder;
    N1.push_back(intHolder);
  }
  
  return matrixInverse(N1);
}

matrixClass::~matrixClass()
{

}

