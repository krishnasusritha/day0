#include<iostream>
using namespace std;
class string1
{
	char *s;
	int l;
public:
	string1()
	{
		s = NULL;
		l = 0;
	}
	string1(char *a, int d)
	{
		s = (char*)malloc(d * sizeof(char));
		strcpy(s, a);
		l = d;
	}
	string1(char * s1)
	{
		l = strlen(s1);
		s = (char *)malloc(l * sizeof(char));
		strcpy(s, s1);
	}
	~string1()
	{
		free(s);
	}
	string1 operator+(string1 s1)
	{
		string1 s2;
		s2.s = strcat(s, s1.s);
		s2.l = s1.l + l;
	}
	char& operator [](int n)
	{
		return s[n];
	}
	string1 operator =(string1 s1)
	{
		s = new char[s1.l + 1];
		strcpy(s ,s1.s);
		l =s1. l;
		return (*this);
	}
	friend	ostream& operator<<(ostream &cout, string1 &s1);
	friend istream& operator >> (istream &cin, string1 &s1);
};
ostream& operator<<(ostream &cout, string1 &s1)
{
	cout << s1.s;
	cout << s1.l;
	return cout;
}
istream& operator >> (istream &cin, string1 &s1)
{
	cin >> s1.s;
	cin >> s1.l;
	return cin;
}
int main()
{
	string1 c1("hello", 6), c2("world", 6), c3, c4;
		c3 = c1 + c2;
		cout << c1 << c2 << c3;
		cout << c1[6];
		c4 = c3;
}
