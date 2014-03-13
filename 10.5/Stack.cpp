#include "stack.h"

Stack::Stack()
{
	top = 0;
}

bool Stack::push(Item item)
{
	if(top < 10)
	{
		ar[top++] = item;
		return true;
	}
	else
		return false;
}

bool Stack::pop(Item *item)
{
	if(top > 0)
	{
		*item = ar[--top];
		return true;
	}
	else
		return false;

}

Stack::~Stack()
{
}