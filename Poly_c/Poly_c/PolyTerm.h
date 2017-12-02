#pragma once
/*
* PolyTerm.h
*
* CSCI 41 - Project 1
*
* Class representing a term of a polynomial when stored as a
* single linked list. Supports polynomial terms of the form:
*      [(Coefficient) * x^(xPwr) * y^(yPwr)].
*
* Implementation doesn't support fractional values for coefficient,
* xPwr, or yPwr.
*/

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

