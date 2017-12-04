#pragma once
#include <iostream>
#include <string>
#include <stack>
#include <vector>
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

	///*void add(RPN& calculator);
	//void subtract(RPN& calculator);
	//void multiply(RPN& calculator);
	//void divide(RPN& calculator);*/

	//RPN<Type>::RPN();
	//RPN<Type>::~RPN();
};