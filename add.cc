#include "add.h"

//Constructors
Add::Add() 
:x('+'), childLeft(0), childRight(0)
{}

Add::Add(Base* a, Base* b)
:x('+'), childLeft(a), childRight(b)
{}

//Virtual Functions
double Add::evaluate()
{
        return (childLeft->evaluate() + childRight->evaluate());
}


