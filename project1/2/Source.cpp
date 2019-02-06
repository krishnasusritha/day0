#include<iostream>
using namespace std;

int main()

{

	int letter = 0, digit = 0, space = 0, tab = 0;

	char text[1000];

	cout<<"Enter the text:";

	cin>>text;
	for (int i = 0;text[i]!='\0';i++)

	{

		if (text[i] >= 65 && text[i] <= 90 || text[i] >= 97 && text[i] <= 122)

			letter++;

		else if (text[i] == 32)

			space++;

		else if (text[i] == 9)

			tab++;

		else if (text[i] >= 48 && text[i] <= 57)

			digit++;



	}

	cout<<"No of Letters"<<letter;
	cout << "No of Spaces" <<space;
	cout << "No of Digits" <<digit;
	cout << "No of Tabs" <<tab;
	getchar();

	
	return 0;

}