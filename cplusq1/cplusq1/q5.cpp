#include <iostream>
using namespace std;

class distance1;
//void distance2::add(distance1 &);
class distance2
{
	int inch;
	int feet;
public:
	void getvalues2()
	{
		cout << "enter value in inches";
		cin >> inch;
		cout << "enter value in feet";
		cin >> feet;
	}
	//friend void add(distance1, distance2);
	void add(distance1 d1, distance2 d2);
	
};
class distance1
{
private:
	int metre1;
	int centi1;

	public:
	void getvalues()
	{
		cout << "enter value in meter";
		cin >> metre1;
		cout << "enter value in centimeter";
		cin >> centi1;
	}

	friend void add(distance1,distance2);
};

void distance2::add(distance1 d1, distance2 d2)
{
	feet = d2.feet + 0.38*d1.metre1;
	inch = d2.inch + 2.54*d1.centi1;
	cout << feet << "\n" << inch;
}

int main()
{
	distance1 d1;
	d1.getvalues();
	distance2 d2;
	d2.getvalues2();
	d2.add(d1,d2);
	return 0;
}