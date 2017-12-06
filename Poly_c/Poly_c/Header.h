#pragma once

#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include <cstdbool>

using namespace std;

template<typename T = double> class RPN
{
private:
	std::stack<T> Stack;
	//std::queue <string> Queue;
public:
	std:: vector <string> Vector;
	void Push(T Value); //push for stack
	T Pop(); //pop for stack
	void Top(); //top value of stack
	//void Qpush(string value); //push queue
	//string Qpop(); //pop queue
	//string Qfront(); //front queue
	bool isPoly();
	void menu();
	//void choice();
	void createfiles();
	string readFormat();
	void readDefinitions();
	//void input(RPN <T> calculator);
	// void runfile(Types... data);
	//bool isOperator(const char input);
	//void performOperation(const string& input, RPN <Container, Types...>& calculator);
	void calculate(string operations);
	void add();
	void subtract();
	void multiply();
	void divide();
	
};

// Node for each poly term
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
