#include "base.h"

//Constructors
Add:Add() : x('+'), left(0), right(0){}
Add(Base* left, Base* right): x('+'), left(childLeft), right(childRight){}
//Virtual Functions
virtual double evaluate(Base* left, Base* right){
        return (childLeft->evaluate() + childLeft->evaluate());
}

};
#endif

