#include <stdio.h>
typedef struct date
{
	int h;
	int m;
	int s;
};
void main()
{
      date d;
      scanf("%d %d %d",&d.h,&d.m,&d.s);
      printf("%d""hr"" %d""min"" %d""sec",d.h,d.m,d.s);
}