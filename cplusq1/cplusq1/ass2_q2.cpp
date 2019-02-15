#include<iostream>
using namespace std;
class student
{
	int rol_num;
	int marks[6];
	int avg;
	int grade;
public:
	student()
	{
		rol_num = 0;
		avg = 0;
		grade = 0;
		for (int i = 0; i < 6; i++)
			marks[i] = 0;
	}
	friend ostream& operator<<(ostream &, student &s1);
	friend istream& operator >> (istream &, student &s1);
	friend void gen_results(student s[], int n);
};
void gen_results(student s[], int n)
{
	int add;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			add += s[i].marks[j];
		}
		s[i].avg = add / 6;

		if (s[i].avg > 70)
			s[i].grade = 10;
		else if (s[i].avg > 60)
			s[i].grade = 9;
		else if (s[i].avg > 50)
			s[i].grade = 8;
		else
			s[i].grade = 7;
		|
	}
}
ostream& operator<<(ostream &cout, student &s1)
	{
		cout << s1.rol_num;
		for (int i = 0; i < 6; i++)
			cout <<s1. marks[i];
		cout << s1.avg <<s1. grade;
		return cout;
	}
istream& operator>>(istream &cin, student &s1)
{
	cin>>s1.rol_num;
	for (int i = 0; i < 6; i++)
		cin>> s1.marks[i];
	cin >>s1.avg >> s1.grade;
	return cin;
}
int main()
{
	student s[5];
	cout << "enter student details";
	for (int i = 0; i < 5; i++)
		cin >> s[i];
	gen_results(s, 5);
	for (int i = 0; i < 5; i++)
		cout << s[i];
}