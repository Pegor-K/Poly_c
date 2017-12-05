#pragma once
#include <vector>
/*
* Polynomial.h
*
* CSCI 41 - Project 1
*
* Class that represents an inputted polynomial as a single linked list.
* Along with polynomial storage, basic operations are allowed on the
* polynomial.
*
* Supports polynomials of the form:
*      [(Coefficient) * x^(xPwr) * y^(yPwr)] + [(Coefficient)
*          * x^(xPwr) * y^(yPwr)] + ...
*
* Implementation doesn't support fractional values for coefficient,
* xPwr, or yPwr.
*
* When inputting polynomial, polyStr must be of the form:
*      (c*x^pwr*y^pwr)+...
* Xs and Ys with powers of 0 can safely be omitted from input string.
*
*/

#include <string>
#include <stack>
#include <cstdlib>
#include "PolyTerm.h"

using namespace std;

class Polynomial
{
private:
	PolyTerm* front;
public:
	// Constructor
	Polynomial()
	{
		front = NULL;
	}
	Polynomial(string polyStr)
	{
		strToPoly(polyStr);
	}
	// Function Declarations
	int degree();
	int coefficient(int term);
	PolyTerm* getFront();
	void sum(PolyTerm* inpPoly);
	void dot(PolyTerm* inpPoly);
	int getTotTerms();
	void simplifyPoly();
	void strToPoly(string polyStr);
	string polyToStr();
	int intPow(int base, int weight);
};


class Polynomial {

private:
	PolyTerm* front;

public:
	/*
	* Constructors...
	*/
	Polynomial() {
		front = NULL;
	}
	Polynomial(string polyStr) 
	{
		strToPoly(polyStr);
	}

	/*
	* int degree()
	*
	* Returns the highest degree of the polynomial. Returns -1
	* if no polynomial currently stored.
	*/
	int degree() {
		if (front != NULL) {
			return front->xPwr;
		}
		else {
			return -1;
		}
	}

	/*
	* int coefficient(int term)
	*
	* Returns the coefficient of the ith term in the stored polynomial.
	* Returns 0 if nothing stored or error occurs.
	*/
	int coefficient(int term) {
		// Return 0 if no polynomial stored or term num is negative
		if (front == NULL || term < 1) {
			return 0;
		}

		PolyTerm* currTerm = front;
		for (int i = 1; i < term; i++) {
			if (currTerm == NULL) {
				return 0;   // Return 0 if term num leads out of bounds
			}
			else {
				currTerm = currTerm->next;
			}
		}

		return currTerm->coef;
	}


	/*
	* bool match(PolyTerm* testFront)
	*
	* Tests whether the obj's polynomial and an inputted polynomial are
	* equal. Returns TRUE if they are and FALSE if they aren't. Inputted
	* polynomial is registered using its list's head.
	*/
	//bool match(PolyTerm* testFront) 
	//{
	//	PolyTerm* currFront;

	//	// Check if one of the polynomials is empty
	//	if ((currFront == NULL && testFront != NULL) || (currFront != NULL && testFront == NULL)) {
	//		return false;
	//	}

	//	// Check if polynomials have same num of terms
	//	int currTerms = 0;
	//	for (currFront = front; currFront != NULL; currFront = currFront->next) {
	//		currTerms++;
	//	}
	//	int testTerms = 0;
	//	for (currFront = testFront; currFront != NULL; currFront = currFront->next) {
	//		testTerms++;
	//	}
	//	if (currTerms != testTerms) {
	//		return false;
	//	}

	//	// Check if all terms of both polynomials match
	//	for (currFront = front; currFront != NULL; currFront = currFront->next) {
	//		// Check if term matches, if not return false
	//		if (!((currFront->coef == testFront->coef) && (currFront->xPwr == testFront->xPwr) &&
	//			(currFront->yPwr == testFront->yPwr))) {
	//			return false;
	//		}

	//		// Term passed, continue on to next term
	//		testFront = testFront->next;
	//	}

	//	// All tests passed, return true
	//	return true;
	//}

	/*
	* PolyTerm* getFront()
	*
	* Returns the head of the obj's polynomial list
	*/
	PolyTerm* getFront() {
		return front;
	}

	/*
	* void sum(PolyTerm* inpPoly)
	*
	* Adds the input polynomial, given by front node parameter, to the current
	* polynomial stored within the class. Resulting polynomial simplified and
	* stored within method calling class.
	*/
	void sum(PolyTerm* inpPoly) {
		PolyTerm* origPolyTerm;
		for (origPolyTerm = front; origPolyTerm->next != NULL; origPolyTerm = origPolyTerm->next) {}
		origPolyTerm->next = inpPoly;
		simplifyPoly();
	}

	/*
	* void dot(PolyTerm* inpPoly)
	*
	* Multiples the input polynomial, given by front node parameter, to the current
	* polynomial stored within the class. Resulting polynomial simplified and stored
	* within method calling class.
	*/
	void dot(PolyTerm* inpPoly) {
		// Create a new polynomial LL
		PolyTerm* ppFront = NULL;
		PolyTerm* ppCurrTerm = ppFront;

		// Multiply each PolyTerm of both LLs to each other and store in new ppLL
		for (PolyTerm* origCurrTerm = front; origCurrTerm != NULL; origCurrTerm = origCurrTerm->next) {
			for (PolyTerm* inpCurrTerm = inpPoly; inpCurrTerm != NULL; inpCurrTerm = inpCurrTerm->next) {
				PolyTerm* newNode = new PolyTerm(origCurrTerm->coef * inpCurrTerm->coef,
					origCurrTerm->xPwr + inpCurrTerm->xPwr,
					NULL);
				if (ppFront == NULL) {
					ppFront = newNode;
					ppCurrTerm = ppFront;
				}
				else {
					ppCurrTerm->next = newNode;
					ppCurrTerm = ppCurrTerm->next;
				}
			}
		}

		// Overwrite origPolynomial with ppPolynomial
		PolyTerm* origTrash = front->next;
		delete origTrash;
		front = ppFront;

		// Simplify stored polynomial
		simplifyPoly();
	}

	/*
	* int getTotTerms()
	*
	* Returns the total number of terms in stored polynomial
	*/
	int getTotTerms() {
		int totTerms = 0;
		for (PolyTerm* currTerm = front; currTerm != NULL; currTerm = currTerm->next) {
			totTerms++;
		}
		return totTerms;
	}

	/*
	* void simplifyPoly()
	*
	* Simplifies the stored polynomial by combing like terms and ordering from highest to
	* lowest degree. Result stored in calling obj, accessed via front polyTerm.
	*/
	void simplifyPoly() {
		// Combine like terms
		for (PolyTerm* currTerm = front; currTerm != NULL; currTerm = currTerm->next) {
			// Create temp nodes for traversal; tpPrev required for possible node deletion
			PolyTerm* tpPrev = currTerm;
			PolyTerm* tpNext = currTerm->next;

			// Traverse through remaining polynomial using temp nodes
			while (tpNext != NULL) {
				if (tpNext->xPwr == currTerm->xPwr ) {
					// Combine like terms into current node
					currTerm->coef += tpNext->coef;

					// Delete temp node from LL
					PolyTerm* trash = tpNext;
					tpPrev->next = trash->next;
					delete trash;
				}

				// Continue on to next node or break loop if at end of polynomial LL
				if (tpPrev->next == NULL) {   // Check tpPrev rather than tpNext since its already
					break;                  // setup
				}
				else {
					tpPrev = tpPrev->next;
					tpNext = tpPrev->next;  // Only tpPrev->next needed since last statement
											// moved tpPrev one node over. While loop condition
											// protects from segFault as tpNext may not exist
											// depending on num of terms in polynomial.
				}
			}
		}

		// Sort by highest degree to lowest degree
		// Get total number of terms in polynomial
		int totTerms = 0;
		for (PolyTerm* currTerm = front; currTerm != NULL; currTerm = currTerm->next)
		{
			totTerms++;
		}


		// Determine degrees of each term and store, with LL indexes, in an array
		// int termDegs[totTerms][2];
		vector<int> termDegs1;
		vector<int> termDegs2;

		/*termDegs[totTerms][2];*/

		int tpCount = 0;
		for (PolyTerm* currTerm = front; currTerm != NULL; currTerm = currTerm->next) {
			termDegs1.push_back(currTerm->xPwr );
			termDegs2.push_back(tpCount);
			tpCount++;
		}

		// Sort the array to port term degrees, with indexes, in order from highest to lowest
		for (int i = 0; i < totTerms; i++) {
			for (int j = totTerms - 1; j > i; j--) {
				if (termDegs1[j] > termDegs1[i]) {
					int tpDeg = termDegs1[i];
					int tpInd = termDegs2[i];
					termDegs1[i] = termDegs1[j];
					termDegs2[i] = termDegs2[j];
					termDegs1[j] = tpDeg;
					termDegs2[j] = tpInd;
				}
			}
		}

		// Build a new polynomial LL from original polynomial with term degrees going from hi to lo
		PolyTerm* newFront = NULL;

		for (int i = 0; i < totTerms; i++) {
			PolyTerm* origCurrTerm = front;
			for (int j = 0; j < termDegs2[i]; j++) {
				origCurrTerm = origCurrTerm->next;
			}

			if (newFront == NULL) {
				newFront = new PolyTerm(origCurrTerm->coef, origCurrTerm->xPwr, NULL);
			}
			else {
				PolyTerm* tpTerm;
				for (tpTerm = newFront; tpTerm->next != NULL; tpTerm = tpTerm->next) {}
				tpTerm->next = new PolyTerm(origCurrTerm->coef, origCurrTerm->xPwr, NULL);
			}
		}

		// Delete orig polynomial LL and point orig front to new polynomial LL
		PolyTerm* trash = front->next;
		delete trash;
		front = newFront;
	}


	/*
	* void strToPoly(string polyStr)
	*
	* Converts the polynomial inputted as a string to a format stored
	* as a single linked list within the object.
	*/
	void strToPoly(string polyStr) {
		bool negCoef, negXPwr;
		stack<int> coef, xPwr;
		PolyTerm* currFront = NULL;
		int termStage;

		for (int i = 0; i < stoi(to_string(polyStr.size())); i++) {

			// Start of new polynomial term, reset stacks and flags
			if (polyStr.at(i) == '(') {
				termStage = 0;

				negCoef = negXPwr  = false;

				while (!coef.empty()) {
					coef.pop();
				}
				while (!xPwr.empty()) {
					xPwr.pop();
				}
			}

			// Negative sign found, adjust correct neg flag
			else if (polyStr.at(i) == '-') {
				switch (termStage) {
				case 0:
					// Coefficient
					negCoef = true;
					break;
				case 1:
					// xPwr
					negXPwr = true;
					break;
			
				}
			}

			// Number found, add to proper stack
			else if (polyStr.at(i) >= '0' && polyStr.at(i) <= '9') {
				switch (termStage) {
				case 0:
					// Coefficient
					coef.push(polyStr.at(i) - '0');
					break;
				case 1:
					// xPwr
					xPwr.push(polyStr.at(i) - '0');
					break;
			
				}
			}

			// Stage in term complete, increment to next stage
			else if (polyStr.at(i) == '*') {
				i++;
				switch (polyStr.at(i)) {
				case 'x':
					termStage = 1;
					break;
				
				}
				i++;
			}

			// At end of term, generate node and add to list
			else if (polyStr.at(i) == ')') {
				int weight;

				// Compute coef val
				int coefVal = 0;
				weight = 0;
				while (!coef.empty()) {
					coefVal += coef.top() * intPow(10, weight);
					coef.pop();
					weight++;
				}
				if (negCoef) {
					coefVal *= -1;
				}

				// Compute xPwr val
				int xPwrVal = 0;
				weight = 0;
				while (!xPwr.empty()) {
					xPwrVal += xPwr.top() * intPow(10, weight);
					xPwr.pop();
					weight++;
				}
				if (negXPwr) {
					xPwrVal *= -1;
				}

			
				// Generate PolyTerm and add to Polynomial list
				PolyTerm* newTerm = new PolyTerm(coefVal, xPwrVal,  NULL);

				if (currFront == NULL) {
					currFront = newTerm;
				}
				else {
					PolyTerm* currTerm;
					for (currTerm = currFront; currTerm->next != NULL; currTerm = currTerm->next) {}
					currTerm->next = newTerm;
				}
			}
		}

		front = currFront;
	}

	/*
	* string polyToStr()
	*
	* Generates and returns a string representing the polynomial the obj
	* is currently storing. Returns empty string if nothing stored.
	*/
	string polyToStr() {
		string polyStr = "";
		PolyTerm* currTerm = front;
		//char buf[12];

		for (currTerm = front; currTerm != NULL; currTerm = currTerm->next) {
			// Add starting bracket for term to string
			polyStr += "(";

			// Add term's coefficient to string
			polyStr += to_string(currTerm->coef);

			// Add the X-part of term to string, if needed...
			if (currTerm->xPwr != 0) {
				polyStr += "*x^";
				polyStr += to_string(currTerm->xPwr);
			}

		

			// Add closing bracket for term to string. Setup for next term
			// if needed.
			polyStr += ")";
			if (currTerm->next != NULL) {
				polyStr += "+";
			}
		}

		return polyStr;
	}

	/*
	* int intPow(int base, int weight)
	*
	* Calculates and returns base to the power of weight using
	* integers.
	*/
	int intPow(int base, int weight) {
		int val = 1;
		for (int i = 0; i < weight; i++) {
			val *= base;
		}
		return val;
	}
};
