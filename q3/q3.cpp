// q3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"



int main()
{
	int n, i, j, k;
	scanf_s("%x", &n);
	printf("enter whic operation to be performed");
	scanf_s("%d", &j);
	switch (j)
	{	     case 0:
			 i = n ^ 15;
			 break;
		 case 1:
			 printf("enter the number to be masked with");
			 scanf_s("%d", &k);
			 i = n&k;
			 break;


		 case 2:
			 printf("enter the number to be masked with");
			 scanf_s("%d", &k);
			 i = n | k;
			 break;
		 case 3:
			 printf("enter the number to be masked with");
			 scanf_s("%d", &k);
			 i = n^k;
			 break;
		 case 4:
			 printf("enter the number to be masked with");
			 scanf_s("%d", &k);
			 i = n << k;
			 break;
		 case 5:
			 printf("enter the number to be masked with");
			 scanf_s("%d", &k);
			 i = n >> k;
			 break;
		 default: printf("ramsai");
			 break;
}	

	printf("%d", i);
	
		return 0;
}

