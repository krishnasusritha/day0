#include <stdio.h>
#include <math.h>
typedef struct complex
{
	int r;
	int i;
};
void main()
{
	int i=0;
	complex c1,c2;
	complex c3;
	scanf("%d %d",&c1.r,&c1.i);
    scanf("%d %d",&c2.r,&c2.i);
    scanf("%d",&i);
	enum op={"+","-","*","/"};
	switch(op)
	{
		case +: c3.r=c1.r+c2.r;
		        c3.i=c1.i+c2.i;
		        break;
	    case -: c3.r=c1.r-c2.r;
		        c3.i=c1.i-c2.i;
		        break;
		case *:c3.r=c1.r*c2.r-c1.i*c2.i;
		       c3.i= c1.r*c2.i+c1.i*c2.r;
		       break;
		case /:c3.r=(c1.r*c2.r+c1.i*c2.i)/sqrt(c2.r*c2.r+c2.i*c2.i);
		       c3.i= (c1.r*c2.i-c1.i*c2.r)/sqrt(c2.r*c2.r+c2.i*c2.i);
		       break;

		 default: c3.r=0;
		          c3.i=0;
		          break;

	}
	printf("%d" "i"" %d\n",c3.r , c3.i );
}