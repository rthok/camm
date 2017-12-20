#include "functions.hpp"

long double Factorial(float x) {
  return (x == 1 ? x : x * Factorial(x - 1));
}

void permutation() {
  float n = 0;
  float k = 0;
  string input = " ";

  cout << " Permutation equation: P(n,k) = ";
  cout << underline << " n! " << endl;
  cout << noline << "                                (n-k)!" << endl;
  cout << " Enter n value: ";
  cin >> n;

  cout << " Enter k value: ";
  cin >> k;
  cout << endl << " P(n,k) = P(" << n << "," << k << ")";
  cout << endl << " = " << underline << Factorial(n) << endl;
  cout << noline << "   " << Factorial(n - k);
  cout << endl << " = " << Factorial(n) / Factorial(n - k);
  cout << endl;

  cout << "\n Would you like solve another permutation problem?";
  cout << "\n Type yes or no: ";
  cin >> input;

  if (input == "yes") {
    permutation();
  } else if (input == "no") {
    cout << "\n Back to main menu\n" << endl;
  } else {
    cout << " ERROR: INVAILD INPUT";
  }
}

void combination() {
  float n = 0;
  float k = 0;
  string input = " ";

  cout << endl << " Combination equation: C(n,k) = ";
  cout << underline << "  n!   " << endl;
  cout << noline << "                                (n-k)!k!" << endl;
  cout << " Enter a numeric value for n: ";
  cin >> n;
  cout << " Enter a numeric value for k: ";
  cin >> k;
  cout << endl << " C(n,k) = C(" << n << "," << k << ")";
  cout << endl << " = " << underline << Factorial(n) << endl;
  cout << noline << "   " << Factorial(n - k) * Factorial(k);
  cout << endl << " = " << Factorial(n) / (Factorial(n - k) * Factorial(k));
  cout << endl;

  cout << "\n Would you like solve another combination problem?";
  cout << "\n Type yes or no: ";
  cin >> input;

  if (input == "yes") {
    combination();
  } else if (input == "no") {
    cout << "\n Back to main menu\n";
  } else {
    cout << " ERROR: INVAILD INPUT";
  }
}

void derivative() {
  char var = 'x';
  int exp = 1;
  int cons = 1;
  int coeff = 1;
  string input = " ";

  cout << " Enter you polynomial." << endl;

  cout << "\n Coefficient: ";
  cin >> coeff;
  cout << " Variable: ";
  cin >> var;
  cout << " Exponent: ";
  cin >> exp;
  cout << " Constant: ";
  cin >> cons;

  cout << "\n f(" << var << ") = " << coeff << var;
  if (exp > 1) {
    cout << "^" << exp;
  }
  if (cons > 0) {
    cout << " + " << cons;
  } else {
    cout << cons;
  }

  coeff = coeff * exp;
  exp--;

  cout << "\n f'(" << var << ") = " << coeff << var;
  if (exp > 1) {
    cout << "^" << exp;
  }

  cout << "\n Would you like find another derivative?";
  cout << "\n Type yes or no: ";
  cin >> input;
  if (input == "yes") {
    derivative();
  } else if (input == "no") {
    cout << "\n Back to main menu\n";
  } else {
    cout << " ERROR: INVAILD INPUT";
  }

  cout << endl;
}

void dot_product() {
  int *A_vec = NULL;
  int *B_vec = NULL;
  int size = 0;
  int dp = 0;
  string input = " ";

  cout << " Enter the size of your 2 vectors: ";
  cin >> size;
  A_vec = new int[size];
  B_vec = new int[size];

  cout << "\n Enter your " << size << " values for Vector A: ";
  cout << endl;

  for (int i = 0; i < size; i++) {
    cout << " " << i + 1 << ": ";
    cin >> *(A_vec + i);
  }

  cout << "\n Enter your " << size << " values for Vector B: ";
  cout << endl;

  for (int i = 0; i < size; i++) {
    cout << " " << i + 1 << ": ";
    cin >> *(B_vec + i);
  }
  cout << "\n You have entered:" << endl;
  cout << " Vector A : <";
  for (int i = 0; i < size; i++) {
    if (i != (size - 1)) {
      cout << *(A_vec + i) << ",";
    } else {
      cout << *(A_vec + i) << ">" << endl;
    }
  }

  cout << " Vector B : <";
  for (int i = 0; i < size; i++) {
    if (i != (size - 1)) {
      cout << *(B_vec + i) << ",";
    } else {
      cout << *(B_vec + i) << ">" << endl;
    }
  }

  for (int i = 0; i < size; i++) {

    dp = dp + (*(A_vec + i) * *(B_vec + i));
  }

  cout << "\n The dot product is " << dp << endl;

  cout << "\n Would you like solve another dot product problem?";
  cout << "\n Type yes or no: ";
  cin >> input;
  if (input == "yes") {
    dot_product();
  } else if (input == "no") {
    cout << "\n Back to main menu\n";
  } else {
    cout << " ERROR: INVAILD INPUT";
  }

  delete[]A_vec;
  delete[]B_vec;


}

void norms() {
  int *X_vec = NULL;
  int size = 0;
  int norm = 0;
  int uniform = 0;
  int infinity = 0;
  string input = " ";

  cout << " Enter the size of your vector space: ";
  cin >> size;
  X_vec = new int[size];

  cout << "\n Enter your " << size << " values for vector space: ";
  cout << endl;

  for (int i = 0; i < size; i++) {
    cout << " " << i + 1 << ": ";
    cin >> *(X_vec + i);
  }

  cout << "\n You have entered:(";
  for (int i = 0; i < size; i++) {
    if (i != (size - 1)) {
      cout << *(X_vec + i) << ",";
    } else {
      cout << *(X_vec + i) << ")" << endl;
    }
  }

  cout << endl << " Norm: ";
  for (int i = 0; i < size; i++) {
    norm = norm + abs(*(X_vec + i));
  }
  cout << norm << endl;

  cout << " Uniform Norm: ";
  for (int i = 0; i < size; i++) {
    uniform = uniform + (*(X_vec + i)* *(X_vec + i));
  }
  uniform = sqrt(uniform);
  cout << uniform << endl;

  cout << " Infinity Norm: ";
  for (int i = 0; i < size; i++) {
    infinity = max(infinity, abs(*(X_vec + i)));
  }
  cout << infinity << endl;

  cout << "\n Would you like find the norms of another vector space?";
  cout << "\n Type yes or no: ";
  cin >> input;
  if (input == "yes") {
    norms();
  } else if (input == "no") {
    cout << "\n Back to main menu\n";
  } else {
    cout << " ERROR: INVAILD INPUT";
  }
}

void display_menu() {
  cout << "\n What problem are you trying to solve? " << endl << endl;
  cout.width(20);
  cout << left << " 0 - EXIT" << " 1 - Display Menu";
  cout << endl;
  cout.width(20);
  cout << left << " 2 - Permutation" << " 3 - Combination";
  cout << endl;
  cout.width(20);
  cout << left << " 4 - Derivative" << " 5 - Dot Product";
  cout << endl;
  cout.width(20);
  cout << left << " 6 - Norms" << " 7 - Systems equations 2 unknown";
  cout << endl;
  cout.width(20);
  cout << left << " 8 - Matrix Addition" << " 9 - Matrix subtraction";
  cout << endl;
  cout.width(20);
  cout << left << " 10 - Matrix Mult by Cons" << " 11 - Matrix determinant";
  cout << endl;
  cout.width(20);

/*Beginning of Added/changed section*/
  //cout << left << " 12 - Matrix Inverse";
  cout << left << " 12 - Matrix Inverse" << " 13 - Degree to Radian";
        cout << endl;

  cout.width(20);
  cout << left << " 14 - Direction Fields" << " 15 - Law Cosines";
        cout << endl;

  cout.width(20);
  cout << left << " 16 - Law Sines" << " 17 - root of number";
        cout << endl;


        cout.width(20);
  cout << left << " 18 - Solve angle" << " 19 - Area of triangle";
        cout << endl;

        cout.width(20);
  cout << left << " 20 - Quadratic Equation" << " 21 - Discrete Recurrence Relations";
        cout << endl;

        cout.width(20);
  cout << left << " 22 - Simple/Compund Interest" << " 23 - Chemistry Conversion";
        cout << endl;

        cout.width(20);
  cout << left << " 24 - Gas Laws" << " 25 - Various Chem problems";
        cout << endl;

/*End of Added/changed section*/
  cout << "\n\n Enter your option: ";
}

