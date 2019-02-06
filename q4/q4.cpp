// q4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//long int comp(long int);

int main()
{
	short int y,c=0;
	scanf_s("%d",& y);
			while (y)
			{
				if (y% 2 == 1)
					c++;
				y = y / 2;
			}
			printf("%d", c);
	//c = comp(y);
	getchar();
    return 0;
}
/*long int comp(long int y)
{
	long int x=0;
	while (y)
	{
		if (y % 10 == 0)
		{
			x = x+10;
		}
		else
		{
			x = x+ 0;
		}
		y /= 10;
	}
	return x;
}

*/