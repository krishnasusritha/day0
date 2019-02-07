#include <stdlib.h>
#include<stdio.h>
int main()
{
	char **a;
	char b[30];
	int i = 0,n, j = 0;
	scanf("%d", &n);
	a = (char **)malloc(n*sizeof(char *));
	while (j < n)
	{
		scanf_s("%d", &i);
		a[j] = (char *)malloc(i * sizeof(char));
		scanf_s("%s", a[j]);
		j++;
	}
	for (j = 0; j < n-1; j++)
	{
		if (strcmp(a[j], a[j + 1]) < 0)
		{
			strcpy(b, a[j]);
			strcpy(a[j], a[j + 1]);
			strcpy(a[j + 1], b);
		}
	}
	j = 0;
	while (j < n)
	{
		printf("%s", a[j]);
		j++;
	}
	return 0;
}