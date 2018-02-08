#include<stdio.h>
main()
	{
int a, b, q, r;
printf("\nEnter the two values\n");
scanf("%d %d",&a,&b);
q=a/b;
r=a%b;
printf("The Quotient of the two numbers is \n %d\n", q);
printf("The Remainder of the two numbers is \n %d\n", r);

}