/*
* Main.cpp
*
* ECE 191
*JON
* Entry point to main function allowing user to test
* functionality of Polynomial class...
*/

#include <iostream>
#include <stack>
#include "Polynomial.h"
using namespace std;

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

	/*cout << "Current Polynomial Matching Test" << endl;
	cout << "================================" << endl;

	cout << "Test 1:" << endl;
	cout << "\tTest Poly: " << failPoly.polyToStr() << endl;
	if (origPoly.match(failPoly.getFront())) {
	cout << "\tTest Result: Polynomials Match..." << endl;
	}
	else {
	cout << "\tTest Result: Polynomials Don't Match..." << endl; 
	}

	cout << "Test 2:" << endl;
	cout << "\tTest Poly: " << passPoly.polyToStr() << endl;
	if (origPoly.match(passPoly.getFront())) {
	cout << "\tTest Result: Polynomials Match..." << endl;
	}
	else {
	cout << "\tTest Result: Polynomials Don't Match..." << endl;
	}*/

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
}
