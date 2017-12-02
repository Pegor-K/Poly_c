#pragma once

#include <string>
#include <stack>
#include <vector>

using namespace std;
// I loveeeeeeeee rainbows
class PolyTerm {
public:
	PolyTerm* next;
	int coef, xPwr;

	PolyTerm() {
		next = NULL;
		coef = xPwr = 0;
	}

	PolyTerm(int coef, int xPwr, PolyTerm* next) {
		this->coef = coef;
		this->xPwr = xPwr;
		this->next = next;
	}
};

template <class Type>
class RPN 
{
public:
	stack <Type>& data;

	void menu();
	void choice(RPN <Type>calculator);
	void input(RPN <Type>calculator);
	void runfile(Type& data);

	bool isOperator(const char input);
	void performOperation(const string& input, RPN& calculator);
	
	///*void add(RPN& calculator);
	//void subtract(RPN& calculator);
	//void multiply(RPN& calculator);
	//void divide(RPN& calculator);*/

	//RPN<Type>::RPN();
	//RPN<Type>::~RPN();
};