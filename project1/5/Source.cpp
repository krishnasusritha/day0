#include<iostream>
using namespace std;

int main()

{

	int n, sum = 0, k;

	cout<<"Enter a number:";

	cin>>n;

	k = n;

	while (n != 0)

	{

		sum = sum * 10 + n % 10;

		n = n / 10;

	}

	if (sum == k)

	cout<<k<< "is a Palindrome number";

	else

		cout<<k<<" is not a Palindrome number";
		getchar();

	return 0;

}