#ifndef LIST_H
#define LIST_H
typedef double TList;
#include "CheckInput.h"

class List
{
private:
	enum {MAX = 10};
	TList List_[MAX];
	int SList;
public:
	List() {SList = 0;}
	bool add(TList item);
	bool IsEmpty();
	bool IsFull();
	void visit(void (*pf)(TList & item));
};

#endif