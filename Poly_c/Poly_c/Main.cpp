#include <iostream>
#include <vector>
#include "Header.h"
#include "Definitions.h"
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
return 0;
} */



int main()
{
	RPN <double> Calc; // <> is left blank because it is default a double, enter any type you want
	Calc.menu();
	Calc.createfiles();
	Calc.readDefinitions(); //can now read and store the defnitions of p1,p2,p3,d1,d2,d3...etc
	//cout << Calc.readFormat() << endl;
	
	int n = Calc.Vector.size();

	for (int i = 0; i < n; i++)
	{
		cout << Calc.Vector[i] << endl;
	}

	//Polynomial polys;

	// Limits files to only contain 10 polynomials
	// Instantiates polys
	/*for (int i = 0; i < Calc.Vector.size(); i++)
	{
		switch (i)
		{
		case 0:
			Polynomial P1(Calc.Vector[i]);
			break;

		case 1:
			Polynomial P2(Calc.Vector[i]);
			break;
		case 2:
			Polynomial P3(Calc.Vector[i]);
			break;
		case 3:
			Polynomial P4(Calc.Vector[i]);
			break;
		case 4:
			Polynomial P5(Calc.Vector[i]);
			break;
		case 5:
			Polynomial P6(Calc.Vector[i]);
			break;
		case 6:
			Polynomial P7(Calc.Vector[i]);
			break;
		case 7:
			Polynomial P8(Calc.Vector[i]);
			break;
		case 8:
			Polynomial P9(Calc.Vector[i]);
			break;
		case 9:
			Polynomial P10(Calc.Vector[i]);
			break;
		default:
			cout << "No polynomials were created" << endl;
			break;
		}
	}
*/
	//Polynomial origPoly("(5*x^4)+(8*x^3)+(3*x^2)+(8)");
	//Polynomial failPoly("(5*x^3)+(2*x^2)+32");
	//Polynomial passPoly("(-5*x^-4)+(8*x^3)+(3*x^2)+(4*y^3)+(8)");
	//Polynomial addPoly("(-5*x^4)+(8*x^3)+(3*x^2)+(8)");
	//Polynomial multPoly("(2*x^2)");

	//cout << "Starting Polynomial" << endl;
	//cout << "===================" << endl;
	//cout << origPoly.polyToStr() << endl;
	//cout << endl;

	//cout << "Highest Degree of Current Polynomial" << endl;
	//cout << "====================================" << endl;
	//cout << origPoly.degree() << endl;
	//cout << endl;

	//cout << "Coefficients of Current Polynomial" << endl;
	//cout << "==================================" << endl;
	//for (int i = 1; i <= origPoly.getTotTerms(); i++) {
	//	cout << "Term " << i << " Coefficient: " << origPoly.coefficient(i) << endl;
	//}
	//cout << endl;

	//cout << "Current Polynomial Matching Test" << endl;
	//cout << "================================" << endl;

	///*cout << "Test 1:" << endl;
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
	//}*/

	//cout << endl;

	//cout << "Adding to Current Polynomial" << endl;
	//cout << "============================" << endl;
	//cout << "Current Polynomial: " << origPoly.polyToStr() << endl;
	//cout << "Added with: " << addPoly.polyToStr() << endl;
	//origPoly.sum(addPoly.getFront());
	//cout << "New Current Polynomial: " << origPoly.polyToStr() << endl;
	//cout << endl;

	//cout << "Multiplying to Current Polynomial" << endl;
	//cout << "=================================" << endl;
	//cout << "Current Polynomial: " << origPoly.polyToStr() << endl;
	//cout << "Multiplied with: " << multPoly.polyToStr() << endl;
	//origPoly.dot(multPoly.getFront());
	//cout << "New Current Polynomial: " << origPoly.polyToStr() << endl;
	//cout << endl;

	getchar();

	return 0;
}
