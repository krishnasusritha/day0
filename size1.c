#include <stdio.h>
typedef struct size1
{
	int n;
	char i;
}s1;
union size2
{
	int n1;
	char i1;
};
void main()
{
	s1 s;
	size2 s2;
	printf("%d  %d",sizeof(s),sizeof(s2));
}