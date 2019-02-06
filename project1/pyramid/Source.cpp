#include<iostream>
using namespace std;

int main()

{

	int i, j, k, l;

	for (i = 1;i <= 5;i++)

	{

		for (k = 1;k <= 5 - i;k++)
		{ 
			cout<<" ";
			}
		for (j = i;j >= 1;j--)
		{ 
			cout<<j;
			}
		for (l = 2;l <= i;l++)
		{ 
         cout<<l;
		 }
		cout<<endl;

	}
	getchar();
	return 0;

}