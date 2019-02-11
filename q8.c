#include <stdio.h>
#define add(a,b)  printf(#a"+"#b"=%d",a+b);
#define printf(s)  printf("token"#s"=%d",token##s);
void main()
{
	add(5,4);
	printf("krish");
}