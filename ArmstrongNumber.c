#include<stdio.h>
int power(int p,int q)
{
   int pow=1;
 for(int i=1;i<=q;i++)
    pow=pow*p;
 return pow;
}
int main()
{
  int n,sum=0,k,r,c=0;
  printf("Enter a number:");
  scanf("%d",&n);
  k=n;//gchjf
  while(n!=0)
  {
   n=n/10;
   c++;
  }
  n=k;
  while(n!=0)
  {
   r=n%10;
   sum+=power(r,c);
   n/=10;
  }
  if(sum==k)
  printf("\n %d is an Armstrong number",k);
  else
  printf("\n %d is not an Armstrong number",k);
  return 0;
}



