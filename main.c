#include "libfunc.h"
#include <stdio.h>


int main() {
struct comp
{
  double real, img;
};

struct comp a, b, c;

	int s=0 ;
	while(s != 5)
	{
		printf("1=add(+)\n");
    	printf("2=subtract(-)\n");
    	printf("3=multiply(*)\n");
    	printf("4=divide(/)\n");
    	printf("5=exit from the program\n");
    	printf("select operation: ");
		scanf("%d", &s);
		
		switch(s)
		{
		case 1: printf("example (A+Bi)+(C+Di)\n");
				printf("enter A and B: ");
				scanf("%lf%lf", &a.real, &a.img);
				printf("enter C and D: ");
				scanf("%lf%lf", &b.real, &b.img);
				add(a.real, a.img, b.real, b.img );
				break;

		case 2: printf("example (A+Bi)-(C+Di)\n");
				printf("enter A and B: ");
				scanf("%lf%lf", &a.real, &a.img);
				printf("enter C and D: ");
				scanf("%lf%lf", &b.real, &b.img);
				sub(a.real, a.img, b.real, b.img );
				break;
		case 3: printf("example (A+Bi)*(C+Di)\n");
				printf("enter A and B: ");
				scanf("%lf%lf", &a.real, &a.img);
				printf("enter C and D: ");
				scanf("%lf%lf", &b.real, &b.img);
				mul(a.real, a.img, b.real, b.img );
				break;
		case 4: printf("example (A+Bi)/(C+Di)\n");
				printf("enter A and B: ");
				scanf("%lf%lf", &a.real, &a.img);
				printf("enter C and D: ");
				scanf("%lf%lf", &b.real, &b.img);
				di(a.real, a.img, b.real, b.img );
				break;
		default:
                break;
		}
    
      
}
	return 0;
	
	
}


