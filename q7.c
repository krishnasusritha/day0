#include <stdio.h>
void main()
{
	int n=0;
	char ch;
	scanf("%d",&n);
	FILE *fp;
	fp=fopen(file.c,'w');
	if(fp==NULL)
	{
		printf("file not created :");
	}
	else
	{
		 while ((n = getchar()) != EOF)
            {
             	c=n^255;
     			   fputc(c, fp);
   			 }
   		while((c=fgetc(fp))!=EOF)
                 printf("%c\t",c);
    }    
}