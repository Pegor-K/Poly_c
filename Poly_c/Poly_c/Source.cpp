// Final Project.cpp : Defines the entry point for the console application.
//

#include "Header.h"
#include <string>

using namespace std;

int main()
{
	RPN <int>calculator;
	
	calculator.menu();
	calculator.choice(calculator);

	system("pause");

	return 0;
}
