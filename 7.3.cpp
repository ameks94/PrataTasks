#include "CheckInput.h"
struct Box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void output_struct(Box box)
{
	cout << "Maker: " << box.maker << endl << "Height: " << box.height
		<< endl << "Width: " << box.width << endl << "Length: " << box.length
		<< endl << "Volume: " << box.volume << endl;
}

void SetVolume(Box *box)
{
	box->volume = box->height * box->width * box->length;
}

void main()
{
	Box *box = new Box;
	cout << "Enter Box parameters:" << endl;
	input(box->maker,40,"Maker: ");
	input(&box->height,"Height: ");
	input(&box->width,"Width: ");
	input(&box->length,"Length: ");
	SetVolume(box);
	cout << "Your record: " << endl;
	output_struct(*box);
	delete box;
	system("pause");
}
