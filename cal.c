#include <iostream.h>
using namespace std
int main()
{
	int x,y,a,b;
	cout<<"enter x,a,b";
	cin>>x>>a>>b;
	switch(x)
     case 0: y=a+b;
              break;

      case 1: y=a-b;
                break;
      case 2: y=a*b;
                break;
      case 3: y=a/b;
                 break;
      default: break;
      return 0;
}