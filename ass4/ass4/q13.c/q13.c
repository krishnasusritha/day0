// q13.c.cpp : Defines the entry point for the console application.
//

#include <stdio.h>

void expand(char*x, char*y)
{
	int i = 0, j = 0, k = 0;
	for (i = 0; x[i] != '\0';i++)
	{
		if (x[i] == '-')
		{
			for (j = 1; j < x[i + 1] - x[i - 1]; j++)
			{
				y[k++] = x[i - 1] + j;
			}
		}
		else
		{
			y[k] = x[i];
			k++;
		}
	}
	printf("%s", y);
}
int main()
{
	char *x;
	char *y;
	int n1, n2=100;
	scanf("%d", &n1);
	x = (char *)malloc(n1 * sizeof(char));
	y = (char *)malloc(n2* sizeof(char));
	scanf("%s", x);
	expand(x, y);
    return 0;
}

