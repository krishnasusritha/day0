#include <stdio.h>
int main()
{
	char *x;
	char y;
	int n1,i=0,j=0;
	scanf("%d", &n1);
	x = (char *)malloc(n1 * sizeof(char));
	scanf("%s", x);
	while(i<n1)
	{
		y = x[0];
		for (j = 1; x[j] != '\0'; j++)
		{
			x[j - 1] = x[j];
		}
		x[j-1] = y;
		x[j] = '\0';
		printf("%s   ", x);
		i++;
		
	}
	return 0;
}

