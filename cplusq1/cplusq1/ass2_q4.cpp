#include<iostream>
using namespace std;
class complex
{
	int x, y;
public:
	complex()
	{
		x = 0;
		y = 0;
	}
	complex(int a, int b)
	{
		x = a;
		y = b;
	}
	~complex()
	{
		cout << "im in destructor";
	}
	complex operator +(complex c)
	{
		complex c1;
		c1.x = x + c.x;
		c1.y = y + c.y;
		return c1;
	}
	complex operator -(complex c)
	{
		complex c1;
		c1.x = x - c.x;
		c1.y = y - c.y;
		return c1;
	}
	complex operator -()
	{
		complex c1;
		c1.x = -x;
		c1.y = -y;
	}
	complex operator ++(int x)
	{
		complex c1;
		c1.x = x ++;
		c1.y = y ++;
		return c1;
	}
	complex operator ++()
	{
		
		 x ++;
		 y ++;
		 return (*this);
	}
	complex operator =(complex c)
	{
		x =c.x;
		y =c.y;
	}
friend	ostream& operator<<(ostream &cout, complex &s1);
friend istream& operator >> (istream &cin, complex &s1);
};

ostream& operator<<(ostream &cout, complex &s1)
{
	cout << s1.x;
	cout << s1.y;
	return cout;
}
istream& operator>>(istream &cin, complex &s1)
{
	cin >> s1.x;
	cin >> s1.y;
	return cin;
}
int main()
{
	complex c1(1,2), c2(3,4), c3, c4,c5;
	c3 = c1 + c2;
	cout << c1 << c2 << c3;
	c4 = c1 - c2;
	cout << c4;
	c1++;
	cout << c1;
	++c2;
	cout << c2;
	c5 = c1;
	cout << c5;
	return 0;
}