#include <iostream>
#include <vector>
#include "RPN.h"
#include "RPNdefined.h"
#include <iostream>
#include <stack>
#include "Polynomial.h"
#include <stdio.h>
#include <string>
#include <fstream>
using namespace std;


/*
* Main.cpp


/*
int main() {
Polynomial origPoly("(5*x^4)+(8*x^3)+(3*x^2)+(8)");
Polynomial failPoly("(5*x^3)+(2*x^2)+32");
Polynomial passPoly("(-5*x^-4)+(8*x^3)+(3*x^2)+(4*y^3)+(8)");
Polynomial addPoly("(-5*x^4)+(8*x^3)+(3*x^2)+(8)");
Polynomial multPoly("(2*x^2)");

cout << "Starting Polynomial" << endl;
cout << "===================" << endl;
cout << origPoly.polyToStr() << endl;
cout << endl;

cout << "Highest Degree of Current Polynomial" << endl;
cout << "====================================" << endl;
cout << origPoly.degree() << endl;
cout << endl;

cout << "Coefficients of Current Polynomial" << endl;
cout << "==================================" << endl;
for (int i = 1; i <= origPoly.getTotTerms(); i++) {
cout << "Term " << i << " Coefficient: " << origPoly.coefficient(i) << endl;
}
cout << endl;

//cout << "Current Polynomial Matching Test" << endl;
//cout << "================================" << endl;

//cout << "Test 1:" << endl;
//cout << "\tTest Poly: " << failPoly.polyToStr() << endl;
//if (origPoly.match(failPoly.getFront())) {
//cout << "\tTest Result: Polynomials Match..." << endl;
//}
//else {
//cout << "\tTest Result: Polynomials Don't Match..." << endl;
//}

//cout << "Test 2:" << endl;
//cout << "\tTest Poly: " << passPoly.polyToStr() << endl;
//if (origPoly.match(passPoly.getFront())) {
//cout << "\tTest Result: Polynomials Match..." << endl;
//}
//else {
//cout << "\tTest Result: Polynomials Don't Match..." << endl;
//}

cout << endl;

cout << "Adding to Current Polynomial" << endl;
cout << "============================" << endl;
cout << "Current Polynomial: " << origPoly.polyToStr() << endl;
cout << "Added with: " << addPoly.polyToStr() << endl;
origPoly.sum(addPoly.getFront());
cout << "New Current Polynomial: " << origPoly.polyToStr() << endl;
cout << endl;

cout << "Multiplying to Current Polynomial" << endl;
cout << "=================================" << endl;
cout << "Current Polynomial: " << origPoly.polyToStr() << endl;
cout << "Multiplied with: " << multPoly.polyToStr() << endl;
origPoly.dot(multPoly.getFront());
cout << "New Current Polynomial: " << origPoly.polyToStr() << endl;
cout << endl;

system("pause");
return 0;
} */



int main()
{
	RPN <> Calc; // <> is left blank because it is default a double enter any type you want
	//Calc.menu();

	
	

	//cout << "Pushed: ";
	//Calc.Push(3.141);
	//Calc.Top();
	//cout << "Pushed: ";
	//Calc.Push(7.5);
	//Calc.Top();
	//cout << "Results of addition: ";
	//Calc.add();//when called it'll work on any type
	//cout << "Pushed :";
	//Calc.Push(3.641);
	//Calc.Top();
	//cout << "Results of subtraction: ";
	//Calc.subtract();
	//cout << "Pushed: ";
	//Calc.Push(3);
	//Calc.Top();
	//cout << "Results of Multiplication: ";
	//Calc.multiply();
	//cout << "Pushed: ";
	//Calc.Push(7.57354);
	//Calc.Top();
	//cout << "Results of Division: ";
	//Calc.divide();
	//// demo the complete functionality of this calculator!


	getchar();

	return 0;
}
