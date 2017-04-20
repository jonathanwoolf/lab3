#ifndef __SUB_H__
#define __SUB_H__

#include "base.h"

class Sub: public Base
{
public: 
char x;
Base* childLeft;
Base* childRight;

//constructors
Sub();
Sub(Base*, Base*);

//Virtual Functions
virtual double evaluate();
};

#endif
