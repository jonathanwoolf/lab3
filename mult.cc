#include "base.h"

//Constructors
Mult:Mult() : x('*'), left(0), right(0){}
Mult:Mult(Base* left, Base* right): x('*'), left(childLeft), right(childRight){}
//Virtual Functions
virtual double Mult:evaluate(Base* left, Base* right){
	return (childLeft->evaluate() * childRight->evaluate());	
}

};
#endif
