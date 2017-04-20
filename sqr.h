#ifndef __SQR_H__
#define __SQR_H__

#include "base.h"

class Square: public Base
{
public:
std::string x;
Base* onlyChild;

//Constructors
Square();
Square(Base*);

//Virtual Functions 
virtual double evaluate();
};

#endif
