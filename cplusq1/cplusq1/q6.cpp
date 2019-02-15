#include <iostream>
#include <math.h>
using namespace std;

class point
{
	int x;
	int y;
public:
	point(int a,int b)
	{
		x = a;
		y = b;
	}
	friend void dist(point, point);
};
void dist(point p1, point p2)
{
	int d;
	d = sqrt((p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y));
	cout << d;
}
void main()
{
	point p1(2, 3), p2(4, 5);
	dist(p1, p2);
}