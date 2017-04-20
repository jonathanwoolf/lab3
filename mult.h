#ifndef __MULT_H__
#define __MULT_H__

#include "base.h"

class Mult: public Base
{
public: 
char x;
Base* childLeft;
Base* childRight;

//Constructors
Mult(); 
Mult(Base*, Base*);

//Virtual Functions
virtual double evaluate();
};

#endif
