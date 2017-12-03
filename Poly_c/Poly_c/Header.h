#pragma once

#include <string>
#include <stack>
#include <vector>



template<template <typename... Args> class Container, typename... Types>
class RPN
{
public:
	Container <Types...> stacks;

	//void menu();
	void choice(RPN <Container, Types...> calculator);
	void input(RPN <Container, Types...> calculator);
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