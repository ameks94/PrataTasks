#include "CheckInput.h"
#include <ctype.h>
struct Pat 
{
	string name;
	double summ;
};
void main ()
{
	int vowels=0,consonants=0,other=0;
	string word;
	cout << "Enter words (q to quit): " << endl;
	do
	{
		getline(cin,word);
		if (word == "q")
			break;
		if (!isalpha(word[0]))
			other++;
		else
		{
			word[0]=tolower(word[0]);
			if (word[0]=='a' || word[0]=='e' || 
			    word[0]=='i' || word[0]=='o' ||
				word[0]=='u' || word[0]=='y')
				vowels++;
			else
				consonants++;
		}
	}
	while (true);
	cout << vowels << " words beginning with vowels" << endl;
	cout << consonants << " words beginning with consonants" << endl;
	cout << other << " others" << endl;
	system("pause");
}

