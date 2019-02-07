#include <stdio.h> 
#include <string.h> 

int main()
{
	char *s1, *s2;
	int i = 0, j = 0;
	scanf("%s %s", s1, s2);
	for (i = 0; s1[i] != '\0'; i++)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			if (s1[i] == s2[j])
			{
				s1[i] = '$';
		  }
	  }
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] == '$')
		{
			for (j = i; s1[j] != '\0'; j++)
			{
				s1[j] = s1[j + 1];
			}
		}
	}
	s1[j] = '\0';
	return 0;



}