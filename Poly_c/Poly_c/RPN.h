#pragma once
#include <iostream>
#include <string>
#include <stack>
template<typename T = double> class RPN
{
private:
	std::stack<T> Stack;
public:
	void Push(T Value)
	{
		Stack.push(Value);
	}

	T Pop()
	{
		if (Stack.size() == 0)
		{
			return 0;
		}

		T Result = Stack.top();
		Stack.pop();
		return Result;
	}



	void menu();
	/*void choice(RPN <T>   calculator);
	void input(RPN <T> calculator);*/
	// void runfile(Types... data);
	//bool isOperator(const char input);
	//void performOperation(const string& input, RPN <Container, Types...>& calculator);
	void add();
	//void subtract(RPN& calculator);
	//void multiply(RPN& calculator);
	//void divide(RPN& calculator);*/
	//RPN<Type>::RPN();
	//RPN<Type>::~RPN();
};

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

template<typename T = double>
void RPN<T>::add()
{

	Push(Pop() + Pop());
	cout << Stack.top();

	//	string poly1, poly2, result;
	//
	//	calculator.pop();
	//	poly1 = calculator.top();
	//	calculator.pop();
	//	poly2 = calculator.top();
	//	calculator.pop();
}
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
	cout << endl << endl << endl << endl;
}