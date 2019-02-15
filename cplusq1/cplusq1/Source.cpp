#include <iostream>
using namespace std;
class time1
{
	int h;
	int m;
	int s;
public:
	void display(const time1 &t)
	{
		cout <<t. h << ":" <<t. m << ":" << t.s<<"\n";
	}
	time1()
	{
		h = 0;
		m = 0;
		s = 0;
	}
   time1(int x, int y, int z)
	{
		h = x;
		m = y;
		s = z;
	}
	void add(const time1 &t1, const time1 &t2)
	{
		h = t1.h +t2.h;
		m = t1.m + t2.m;
		s = t1.s + t2.s;
		
	}
	};
int main()
{
	time1 t1(2, 35, 01);
	time1 t2(4,30,03);
	time1 t3;
	t3.add(t1,t2);
	t1.display(t1);
	t2.display(t2);
	t3.display(t3);
}
