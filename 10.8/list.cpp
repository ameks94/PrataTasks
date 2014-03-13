#include "list.h"

bool List::add(TList item)
{
	if(SList < MAX)
	{
		List_[SList++] = item;
		return true;
	}
	else
		return false;
}

bool List::IsEmpty()
{
	return SList == 0;
}

bool List::IsFull()
{
	return SList == MAX;
}

void List::visit(void (*pf)(TList & item))
{
	for(int i = 0; i < SList; i++)
		pf(List_[i]);
}