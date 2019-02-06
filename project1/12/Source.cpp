#include<iostream>
using namespace std;
#define total 32
int rotate_right(int n,int b)
{
   return (n>>b)|(n<<(total-b));
}
int main()
{
 int n,b;
 cout<<"Enter n:";
 cin>>n;
 cout<<"Enter b:";
 cin>>b;
 int k=rotate_right(n,b);
 cout<<"Required rotation is:"<<k<<endl;

}
