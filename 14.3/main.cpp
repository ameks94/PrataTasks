#include <iostream>
#include <cstring>
#include "workermi.h"
#include "Queuetp.h"

const int SIZE = 4;
int main()
{
	using std::cin;
	using std::cout;
	using std::endl;

	Worker *element;

	QueueTP<Worker *> queue;
	for (int i = 0; i < SIZE; i++)
	{
		cout << i + 1 << "iteration" << endl;
		char k;
		do 
		{
			system("cls");
			cout << "Enter the employee category:\n"
				<< "w: waiter s: singer "
				<< "t: singing waiter q: quit\n";
			cin.get(k);
			cin.clear();
			cin.sync();
		}
		while(k != 'w' && k!= 's' && k != 't' && k != 'q');

		if (k == 'q')
			break;

		switch(k)
		{
		case 'w': element = new Waiter;
			break;
		case 's': element = new Singer;
			break;
		case 't': element = new SingingWaiter;
			break;
		}
		element->Set();
		queue.enqueue(element);
	}

	cout << "\nHere is your staff:\n";

	for (int i = 0; i < SIZE; i++)
	{
		cout << endl;
		queue.dequeue(element);
		element->Show();
		delete element;
	}

	cout << "Bye.\n";

	system("pause");
	return 0;
}
