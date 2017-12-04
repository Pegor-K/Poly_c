#include <iostream>
#include <vector>
#include "Header.h"
#include <iostream>
#include <stack>
#include "Polynomial.h"
#include <stdio.h>
#include <string>
#include <fstream>
using namespace std;

//ifstream inFile("inData.txt");
//ofstream outFile("outData.txt");


//template<typename T = double>
//void RPN <T>::choice(RPN <T> calculator)
//{
//	char n;
//	while (1)
//	{
//		cin >> n;
//		switch (n)
//		{
//		case 'f':
//			runfile(calculator.data);
//			break;
//		case 's':
//			input(calculator);
//			if (calculator.isOperator(calculator.data.top()))
//			{
//				calculator.performOperation(calculator.data.top(), calculator);
//				break;
//			}
//		default: return 0;
//		}
//	}
//}
//
//template<typename T = double>
//void RPN<T>::input(RPN <T> calculator)
//{
//	Types... temp;
//
//	while (1)
//	{
//		cout << "Input: ";
//		cin >> temp;
//		static const string operators = "-+*/";
//		if (temp.length() == 1 && isalpha(temp) == 0) // right size to be an operator.
//		{
//			calculator.performOperation(temp);
//			// look in the operator string for the first (and only) character in input
//		}
//		else
//			calculator.data.push(temp);
//	}
//}

//template<typename T = double>
//void RPN::runfile(T data)
//{
//	// Code for inputting from a file
//	string poly1, poly2, op;
//
//	inFile >> poly1 >> poly2 >> op;
//
//	data.push(poly2);
//	data.push(poly1);
//	data.push(op);
//
//	if (data.isOperator(data.top()))
//	{
//		data.performOperation(data.top(), data);
//	}
//}

//template<typename T = double>
//bool RPN::isOperator(const char input)
//{
//	static const string operators = "-+*/";
//	if (input.length() == 1 && isalpha(input) == 0) // right size to be an operator.
//	{
//		return operators.find_first_of(input[0]) != string::npos;
//		// look in the operator string for the first (and only) character in input
//	}
//	return false;
//}

//template<typename T = double>
//void RPN::performOperation(const string& input, RPN calculator)
//{
//	switch (input[0])
//	{
//	case '+': calculator.add(calculator);
//		break;
//	case '-': calculator.subtract(calculator);
//		break;
//	case '*': calculator.multiply(calculator);
//		break;
//	case '/':  calculator.divide(calculator);
//		break;
//	}
//}

//template<typename T = double>
//void RPN::add(RPN<T> calculator)
//{
//	string poly1, poly2, result;
//
//	calculator.pop();
//	poly1 = calculator.top();
//	calculator.pop();
//	poly2 = calculator.top();
//	calculator.pop();
//}
//template<typename T = double>
//void RPN::subtract(RPN& calculator)
//{
//	string poly1, poly2, result;
//
//	calculator.pop();
//	poly1 = calculator.top();
//	calculator.pop();
//	poly2 = calculator.top();
//	calculator.pop();
//
//	calculator.mapDegree(poly1);
//}
//template<typename T = double>
//void RPN::multiply(RPN& calculator)
//{
//	string poly1, poly2, result;
//
//	calculator.pop();
//	poly1 = calculator.top();
//	calculator.pop();
//	poly2 = calculator.top();
//	calculator.pop();
//
//	calculator.mapDegree(poly1);
//}
//
//void RPN::divide(RPN& calculator)
//{
//	string poly1, poly2, result;
//
//	calculator.pop();
//	poly1 = calculator.top();
//	calculator.pop();
//	poly2 = calculator.top();
//	calculator.pop();
//
//	calculator.mapDegree(poly1);
//	cout << "line 61" << endl;
//}

template<typename T = double>
void RPN <T>::menu()
{
	cout << "	 _______  _______  ___      __   __  __    _  _______  __   __  ___   _______  ___			" << endl;
	cout << "	|       ||       ||   |    |  | |  ||  |  | ||       ||  |_|  ||   | |   _   ||   |			" << endl;
	cout << "	|    _  ||   _   ||   |    |  |_|  ||   |_| ||   _   ||       ||   | |  |_|  ||   |			" << endl;
	cout << "	|   |_| ||  | |  ||   |    |       ||       ||  | |  ||       ||   | |       ||   |			" << endl;
	cout << "	|    ___||  |_|  ||   |___ |_     _|| _     ||  |_|  ||       ||   | |       ||   |___		" << endl;
	cout << "	|   |    |       ||       |  |   |  || |    ||       || ||_|| ||   | |   _   ||       |		" << endl;
	cout << "	|___|    |_______||_______|  |___|  |_| |__ ||_______||_|   |_||___| |__| |__||_______|		" << endl;
	cout << "	 _______  _______  ___      _______  __   __  ___      _______  _______  _______  ______	" << endl;
	cout << "	|       ||   _   ||   |    |       ||  | |  ||   |    |   _   ||       ||       ||    _ |	" << endl;
	cout << "	|       ||  |_|  ||   |    |       ||  | |  ||   |    |  |_|  ||_     _||   _   ||   | ||	" << endl;
	cout << "	|       ||       ||   |    |       ||  |_|  ||   |    |       |  |   |  |  | |  ||   |_||_	" << endl;
	cout << "	|      _||       ||   |___ |      _||       ||   |___ |       |  |   |  |  |_|  ||    __  |	" << endl;
	cout << "	|     |_ |   _   ||       ||     |_ |       ||       ||   _   |  |   |  |       ||   |  | |	" << endl;
	cout << "	|_______||__| |__||_______||_______||_______||_______||__| |__|  |___|  |_______||___|  |_| " << endl << endl;

	cout << "**** Polynomial Calculator Program: Using Reverse Polish Notation ****" << endl;
	cout << "Enter in a polynomial of the form: ax^n+bx^(n-1)+cx^(n-2)+...+zx^(n-n)" << endl;
	cout << "Where a, b, c, ..., z are leading coefficients and n is the highest degree." << endl << endl;

	cout << "Input: (f)ile input or (s)creen input or Any character to quit: ";
}
/*
* Main.cpp
*
* ECE 191
*JON
* Entry point to main function allowing user to test
* functionality of Polynomial class...
*/
//gay
//another test: anthony

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
	RPN <> Calc;

	Calc.menu();

	Calc.Push(3.141);
	std::cout << Calc.Pop() << std::endl;

	getchar();

	return 0;
}