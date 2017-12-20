#ifndef MATRIXCLASS_H
#define MATRIXCLASS_H
#include <string>
#include <vector>
#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;
class matrixClass{
public:
        matrixClass();
        matrixClass(int i);
        vector<int> matrixAddition(vector<int> A1, vector<int> A2);
	      vector<int> matrixAdditionUI();
        vector<int> matrixSubtraction(vector<int> A1, vector<int> A2);
	      vector<int> matrixSubtractionUI();
        vector<float> matrixMultiplicationConstant(vector<float> A1, int m);
	      vector<float> matrixMultiplicationConstantUI();
        int matrixDeterminant(vector<int> A1);
        int matrixDeterminantUI();
        vector<float> matrixInverse(vector<int> A1);
        vector<float> matrixInverseUI();
        virtual ~matrixClass();

private:
        string strInput;
        string strOption;
        string dimension;
        string strAppend;
        int intR;
        int doubleInput;
        vector<int> v1;
        vector<int> v2;
        vector<int> vAns;
        int intRow, intColumn, intTotal, intCounter;
        int intRow2, intColumn2, intTotal2;

};

#endif


