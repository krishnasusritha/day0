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
	//friend class operation;
	friend complex operation::add(complex &c1, complex &c2);
	friend complex operation::mul(complex &c1, complex &c2);
};

class operation
{
public:
	complex add(complex &c1, complex &c2)
	{
		complex c3;
		c3.real = c1.real + c2.real;
		c3.img = c1.img + c2.img;
		return c3;

	}
	complex mul(complex &c1, complex &c2)
	{
		complex c3;
		c3.real = c1.real *c2.real - c1.img*c2.img;
		c3.img = c1.real*c2.img + c1.img*c2.real;
	}
};

int main()
{
	operation o;
	complex c1(2,3), c2(4,5),c3,c4;
	c3= o.add(c1, c2);
	c4 = o.mul(c1, c2);

}