/* This Program calculates three different arithematic problems by the user inputting
   two integers to Divide, Multiply, and Subtract and it prints the Quotient and Remainder,
   the Product, and the Difference.
	Written By: James Murphy N00655192
	Date: 9/4/17
*/


#include<stdio.h>
main()
	{
int a, b, q, r, p, d;
printf("\nEnter two integers to be divided, multiplied, and subtracted\n");
scanf("%d %d",&a,&b);
q=a/b;
r=a%b;
p=a*b;
d=a-b;
printf("The Quotient of the two integers is \n %d\n", q);
printf("The Remainder of the Quotient is \n %d\n", r);
printf("The Product of the two integers is \n %d\n", p);
printf("The Difference of the two integers is \n %d\n", d);


}