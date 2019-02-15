#include<iostream>
using namespace std;
class polar
{
	int r;
	int a;
public:
	static int count;
	polar()
	{
		r = 0;
		a = 0;
		count++;
		cout << "ïn constructor" << count;
	}
	polar(int c, int b)
	{
		r = c;
		a = b;
		count++;
		cout << "ïn constructor" << count;
	}
	~polar()
	{
		count--;
		cout << "im in destructor";
	}

};
//int polar::count;
int main()
{
	polar p1, p2(2,3);
	return 0;
}