#include<stdio.h>
void main()
{
  int a[10],n,sum,a,b,j;
  int *p1;
  int *p2;
   scanf("%d%d",n,&sum);
   for(i=0;i<n;i++)
	{
	  scanf("%d",a[i]);
	}
  p1=arr;
  for(i=1;i<n;i++)
     {
       for(j=i;j<n-i-1;j++)
	{
	 if(*p1>*p2+i)
	  {
            a=*p1;
            *p1=*p2;
             *p2=a;
	   }
         }
     
      }
}

	           

}
