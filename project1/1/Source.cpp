#include<iostream>
using namespace std;


int add(int,int);
int sub(int, int);
int mul(int, int);
int div1(int, int);
int main()
{
int x=2,y=3;
cout<<"sum="<<add(x,y)<<endl;
cout<<"difference="<< sub(x, y)<<endl;
cout<<"product="<< mul(x, y)<<endl;
cout<<"divisor="<< div1(x, y)<<endl;
system("pause");
return 0;
}