#include<iostream>
using namespace std;
void swap(int a, int b);
void swap(int &a, int &b);
void swap_v(int &a, int &b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}
void swap_r(int a, int b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}
int main()
{
	int m=5, n=6;
	swap_v(m, n);
	cout << m << n;
	swap_r(&m, &n);
	cout << m << n;
}