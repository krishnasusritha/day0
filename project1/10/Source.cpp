#include<iostream>
using namespace std;

int main()

{

	int n,m, sum = 0, k;

	cout<<"Enter a number:";
	cin>>n;

	k = n;

	while (n != 0)

	{

		sum += n % 10;

		n = n / 10;

	}

	cout<< "The sum of digits of"<<k<< " is "<<sum<<endl;

	
    system("pause");
	return 0;
}

