#include "base.h"

//Constructors
Add:Add(){
	x = 0;
}; 
Add(Base* left, Base* right){
	
}

//Virtual Functions
virtual double evaluate(Base* left, Base* right){
	x = left + right;
	return x;	
}

};

#endif
