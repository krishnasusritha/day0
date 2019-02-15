#include<stdio.h>
void main()
{
  int a[10],n,sum,a,b=1,j;
   scanf("%d%d",n,&sum);
   for(i=0;i<n;i++)
	{
	  scanf("%d",a[i]);
	}
   for(i=0;i<n;i++)
	{
	 for(j=i;j<n;j++)
	  {
	    if(b)
 		b=sum-a[i];
	     else if(b==0)
		 printf("%d%d",i,j);
	     else
		break;
	}
	b=1;
	}
}
