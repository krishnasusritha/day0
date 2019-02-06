#include<iostream>
using namespace std;
#include<stdlib.h>
#include<cstdio>


int main()

{

	float salary, HRA, DA, grossSalary;

	cout<<"Enter the salary of the employee (>1):";

	cin>>salary;

	if (salary<1)

	{

		cout<<"Invalid input!";

		exit(0);

	}

	else if (salary <= 4000)

	{

		HRA = 0.20;

		DA = 0.50;

	}

	else if (salary <= 8000)

	{

		HRA = 0.25;

		DA = 0.60;

	}

	else if (salary <= 12000)

	{

		HRA = 0.30;

		DA = 0.70;

	}

	else

	{

		HRA = 0.35;

		DA = 0.70;

	}

	grossSalary = (1 + HRA + DA)*salary;

	cout<<"Gross Salary is "<< grossSalary;

	return 0;

}