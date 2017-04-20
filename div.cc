#include "div.h"

//Constructors
Div::Div() 
:x('/'), childLeft(0), childRight(0)
{}

Div::Div(Base* a, Base* b)
:x('/'), childLeft(a), childRight(b)
{}

//Virtual Functions
double Div::evaluate()
{
	return (childLeft->evaluate() / childRight->evaluate());	
}
