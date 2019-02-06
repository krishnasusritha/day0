#include<iostream>
using namespace std;

int power(int p, int q)

{

	int pow = 1;

	for (int i = 1;i <= q;i++)

		pow = pow*p;

	return pow;

}

int main()

{

	int n, sum = 0, k, r, c = 0;

	cout<<"Enter a number:";

	cin>>n;

	k = n;

	while (n != 0)

	{

		n = n / 10;

		c++;

	}

	n = k;

	while (n != 0)

	{

		r = n % 10;

		sum += power(r, c);

		n /= 10;

	}

	if (sum == k)

		cout<< k<<" is an Armstrong number"<<endl;

	else

		cout<<k<<"is not an Armstrong number";

	return 0;

}

