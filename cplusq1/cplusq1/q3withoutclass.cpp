#include <iostream>
using namespace std;
class operation;
class complex
{
	int real;
	int img;
public:
	complex()
	{
		img = real = 0;

	}
	complex(int x, int y)
	{
		real = x;
		img = y;
	}
	complex(const complex &c)
	{
		real = c.real;
		img = c.img;
	}
	friend void add(complex &c1, complex &c2);
	friend void mul(complex &c1, complex &c2);
};

void add(complex &c1, complex &c2)
	{
		complex c3;
		c3.real = c1.real + c2.real;
		c3.img = c1.img + c2.img;
		cout << c3.real << "+" << c3.img;
	}
	void mul(complex &c1, complex &c2)
	{
		complex c3;
		c3.real = c1.real *c2.real - c1.img*c2.img;
		c3.img = c1.real*c2.img + c1.img*c2.real;
		cout << c3.real << "+" << c3.img;
	}

int main()
{
	complex c1(2, 3), c2(4, 5), c3, c4;
	add(c1, c2);
	mul(c1, c2);

}