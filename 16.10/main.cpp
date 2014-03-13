// vect3.cpp -- using STL functions
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>
#include <conio.h>
struct Review {
	std::string title;
	int rating;
	double price;
};


bool operator<(const std::shared_ptr<Review> & pr1, const std::shared_ptr<Review> & pr2);
bool worseThan(const std::shared_ptr<Review> & pr1, const std::shared_ptr<Review> & pr2);
bool cheaperThan(const std::shared_ptr<Review> & pr1, const std::shared_ptr<Review> & pr2);
bool FillReview(Review & rr);
void ShowReview(const std::shared_ptr<Review> & prr);

int main()
{
	using namespace std;

	vector<shared_ptr<Review>> books;
	Review temp;

	while (FillReview(temp))
	{
		shared_ptr<Review> ntemp(new Review(temp));
		books.push_back(ntemp);
	}

	vector<shared_ptr<Review> > title_sorted(books), 
								price_sorted(books),
								rating_sorted(books);
	sort(title_sorted.begin(), title_sorted.end());
	sort(price_sorted.begin(), price_sorted.end(), cheaperThan);
	sort(rating_sorted.begin(), rating_sorted.end(), worseThan);

	if (books.size() > 0)
	{
		char k;
		std::string s = "Enter a number for actions:\n";
		s.append("'1' for original order\n");
		s.append("'2' for alphabetical order\n");
		s.append("'3' for increasing ratings\n");
		s.append("'4' for decreasing ratings\n");
		s.append("'5' for increasing prices\n");
		s.append("'6' for decreasing prices\n");
		s.append("'7' to quit.\nYour choice? ");
		cout << s;
		k = getch();
		cout << endl;
		switch (k)
		{
		case '1':
			for_each(books.begin(), books.end(), ShowReview);
			break;

		case '2':
			for_each(title_sorted.begin(), title_sorted.end(), ShowReview);
			break;

		case '3':
			for_each(rating_sorted.begin(), rating_sorted.end(), ShowReview);
			break;

		case '4':
			for_each(rating_sorted.rbegin(), rating_sorted.rend(), ShowReview);
			break;

		case '5':
			for_each(price_sorted.begin(), price_sorted.end(), ShowReview);
			break;

		case '6':
			for_each(price_sorted.rbegin(), price_sorted.rend(), ShowReview);
			break;

		default:
			break;
		}

	}
	else
		cout << "No entries. ";
	cout << "Bye.\n";
	system("pause");
	return 0;
}

bool operator<(const std::shared_ptr<Review> & pr1, const std::shared_ptr<Review> & pr2)
{
	if (pr1->title < pr2->title)
		return true;
	else if (pr1->title == pr2->title && pr1->rating < pr2->rating)
		return true;
	else
		return false;
}

bool worseThan(const std::shared_ptr<Review> & pr1, const std::shared_ptr<Review> & pr2)
{
	if (pr1->rating < pr2->rating)
		return true;
	else
		return false;
}

bool cheaperThan(const std::shared_ptr<Review> & pr1, const std::shared_ptr<Review> & pr2)
{
	if (pr1->price < pr2->price)
		return true;
	else
		return false;
}

bool FillReview(Review & rr)
{
	std::cout << "Enter book title (quit to quit): ";
	std::getline(std::cin,rr.title);
	if (rr.title == "quit")
		return false;
	std::cout << "Enter book rating: ";
	std::cin >> rr.rating;
	if (!std::cin)
		return false;
	// get rid of rest of input line
	while (std::cin.get() != '\n')
		continue;
	std::cout << "Enter book price: ";
	std::cin >> rr.price;
	if (!std::cin)
		return false;
	while (std::cin.get() != '\n')
		continue;
	return true;
}

void ShowReview(const std::shared_ptr<Review> & prr)
{
	std::cout << prr->rating << "\t" << prr->title << std::endl; 
}
