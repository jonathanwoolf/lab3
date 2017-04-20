#include "base.h"

//Constructors
Mult:Mult() : x('*'), left(0), right(0){}
Mult(Base* left, Base* right): x('*'), left(childLeft), right(childRight){}
//Virtual Functions
virtual double evaluate(Base* left, Base* right){
	return (childLeft->evaluate() * childLeft->evaluate());	
}

};
#endif
