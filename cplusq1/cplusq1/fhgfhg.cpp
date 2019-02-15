#include<iostream>
#include<math.h>
using namespace std;
class polar
{
	int radius;
	static int count;
public:
	

	polar()
	{
		radius = 0;
		count++;
	}
	polar(int r1)
	{
		radius = r1;
		count++;
	}
	~polar()
	{
		count--;
	}
	void display()
	{
		cout << radius;
	}
};
int main()
{
	polar p, p1(2), p3(4);
	p.display();
	p1.display();

	return 0;
}


