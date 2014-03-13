#ifndef STACK_H
#define STACK_H
#include "custumer.h"
#include "CheckInput.h"
typedef customer Item;

const class Stack
{
private:
	enum {MAX = 10}; // constant specific to class
	Item ar[MAX];
	int top;
public:
	Stack();
	~Stack();
	bool push(Item item);
	bool pop(Item *item);
};

#endif