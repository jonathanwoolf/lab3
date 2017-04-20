nclude "base.h"

//Constructors
Div:Div() : x('/'), left(0), right(0){}
Div:Div(Base* left, Base* right): x('/'), left(childLeft), right(childRight){}
//Virtual Functions
virtual double Div:evaluate(Base* left, Base* right){
	return (childLeft->evaluate() / childRight->evaluate());	
}

};
#endif
