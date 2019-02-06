// q5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d %d %d %d %d", x, (x + 2), *x, (*x + 2), *(x + 2));
	getchar();
    return 0;
}

