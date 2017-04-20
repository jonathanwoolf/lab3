#include "mult.h"

//Constructors
Mult::Mult() 
:x('*'), childLeft(0), childRight(0)
{}

Mult::Mult(Base* a, Base* b)
:x('*'), childLeft(a), childRight(b)
{}

//Virtual Functions
double Mult::evaluate()
{
	return (childLeft->evaluate() * childRight->evaluate());	
}
