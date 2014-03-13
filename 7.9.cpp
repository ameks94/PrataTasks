#include "CheckInput.h"
const int SLEN = 30;
struct Student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(Student *student, int size)
{
	int i = 0;
	cout << "Students information: " << endl;
	for (i = 0; i < size ; i ++)
	{
		cout << i+1 << " student:" << endl << "Fullname: ";
		cin.getline(student[i].fullname,SLEN);
		cin.clear();
		cin.sync();
		if (student[i].fullname == " " || 
			student[i].fullname[0] == char(13))
			break;
		input(student[i].hobby,SLEN,"Hobby: ");
		input(&student[i].ooplevel,"Ooplevel: ");
	}
	cout << "Thank you." << endl;
	return i;
}
void display1(Student student)
{
	cout << "Full name: " << student.fullname << endl;
	cout << "Hobby: " << student.hobby << endl;
	cout << "Ooplevel: " << student.ooplevel << endl;
}
void display2(Student *student)
{
	cout << "Full name: " << student->fullname << endl;
	cout << "Hobby: " << student->hobby << endl;
	cout << "Ooplevel: " << student->ooplevel << endl;
}

void display3(const Student *student, int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << i+1 << " student:" << endl;
		cout << "Full name: " << student[i].fullname << endl;
		cout << "Hobby: " << student[i].hobby << endl;
		cout << "Ooplevel: " << student[i].ooplevel << endl;
	}
}

void main()
{
	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;
	Student* ptr_stu = new Student[class_size];
	int entered = getinfo(ptr_stu,class_size);
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete [] ptr_stu;
	cout << "Done\n";
	system("pause");
}