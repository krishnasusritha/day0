#include<stdio.h>
#include<conio.h>
void main()
{
     FILE *fp;
     char ch;
     int n=0;
     clrscr();
     fp=fopen("file1.c", "w");
     if(fp==NULL)
        printf("file cannot be opened");
     else
     {
        while(argv[])
        {
            if(argv[]>'A'&&argv[]<'Z')
                fputc(argv[]+32);
            else
                fputc(argv[]-32);
        }
    }
    ftell(fp);
    fseek(fp,0,5);
    while((ch=fgetc(fp))!=EOF)
                 printf("%c\t",ch);
}
            

