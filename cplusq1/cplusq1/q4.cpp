#include<iostream>
using namespace std;
inline void add(int &a, int &b)
{
	cout << a + b;
}
inline void sub(int a, int b)
{
	cout << a - b;
}
inline void mul(int a, int b)
{
	cout << a * b;
}
inline void div1(int a, int b)
{
	cout << a / b;
}
inline void mod(int a, int b)
{
	cout << a % b;
}
int main()
{
	int a = 3, b = 2;
	add(a, b);
	sub(a, b);
	mul(a, b);
	div1(a, b);
	mod(a, b);
	return 0;
}