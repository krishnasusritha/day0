#include <stdio.h>
char * delet(char *,char);
int main()
{
	char *a;
	int n = 0, i = 0, j = 0;
	scanf("%d", &n);
	a = (char *)malloc((n+1) * sizeof(char));
	scanf("%s", a);
	printf("before editing  %s", a);
	a = delet(a, 'c');
	printf("after editing  %s", a);
	free(a);
}
char * delet(char *a, char x)
{
	int i = 0, j = 0;
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == x)
		{
			for (j = i; a[j] != '\0'; j++)
			{
				a[j] = a[j + 1];
			}
	  }
	}
	return a;
}