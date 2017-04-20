#include "sub.h"

using namespace std;

//Default constructor 
Sub::Sub()
:x('-'), childLeft(0), childRight(0)
{}

//Operand constructor
Sub::Sub(Base* a, Base* b)
:x('-'), childLeft(a), childRight(b) 
{}

//Evaluates subtraction
double Sub::evaluate()
{
	return (childLeft->evaluate() - childRight->evaluate());
}
