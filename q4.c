#include <stdio.h>
void main()
{
	if(sizeof(char)==2)
	printf("big endian");
    else
    	printf("little endian");
}