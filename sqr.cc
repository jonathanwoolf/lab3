#include "sqr.h"

//Constructors
Square::Square() 
:x(std::string("^2")), onlyChild(0)
{}

Square::Square(Base* a)
:x(std::string("^2")), onlyChild(a)
{}

//Virtual Functions
double Square::evaluate()
{
	return (onlyChild->evaluate() * onlyChild->evaluate());	
}
