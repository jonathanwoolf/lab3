//composite

#ifndef __BASE_H__
#define __BASE_H__

class Base //Abstract
{
public:
	/*Constructors*/
	Base() {}; 
		
	/*Pure Virtual Functions*/
	virtual double evaluate() = 0; 
};

#endif 

/* BINARY
 * 	-add
 * 	-sub
 * 	-mul
 * 	-div
 * UNARY
 * 	-sqr
 * LEAF
 * 	--OP
 */
