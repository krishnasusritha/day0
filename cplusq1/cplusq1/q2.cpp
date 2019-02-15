#include<iostream>
using namespace std;
class student
{
//public:
	char *std_namel;
	int std_avg;
	int sub1_m, sub2_m, sub3_m;
	friend class CollegeCourse;
};
class CollegeCourse 
{
public:
	void setData(char *s,  int m1, int m2, int m3)
	{
		int len = strlen(s);
		std_name1 = (char *)malloc(sizeof(char)*(len + 1));
		strcpy(std_name1, s);
		sub1_m = m1;
		sub2_m = m2;
		sub3_m = m3;
	}
	int Average()
	{
		int avg;
		avg = (s1.sub1_m + s1.sub2_m + s1.sub3_m) / 3;
		cout << avg << "\n";
		return avg;
	}
	void gradecompute(int avg)
	{
		if (avg > 60)
			cout << "firstclss";
		else if (avg > 50)
			cout << "secondclass";
		else if (avg > 40)
			cout << "Third class";
		else
			cout << "Fail";
		
	}
	void display()
	{
		cout << std_name1 << "\n";
		cout << std_avg<<"\n";
		cout << sub1_m << " " << sub2_m << " " << sub3_m;
	}
};
int main()
{
	CollegeCourse s1;
	s1.setdata("sahithi", 87, 89, 90);
	CollegeCourse s2;
	s2.setdata("sushritha", 90, 100, 100);
	s1.Average();
	s1.computegrade();
	s2.Average();
	s2.computegrade();
	s1.display();
	s2.display();
}