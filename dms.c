/* This Program calculates three different arithematic problems,
   Dividing two integers and printing both the Quotient and Remainder,
   Multiplying two integers and printing the Product, and
   Subtracting two integers and printing the Difference.
   All three are done in sequence, input by the user.
	Written By: James Murphy N00655192
	Date: 8/31/17
*/


#include<stdio.h>
main()
	{
int a, b, c, d, e, f, g, h, q, r;
printf("\nEnter two integers to be divided\n");
scanf("%d %d",&a,&b);
q=a/b;
r=a%b;
printf("The Quotient of the two integers is \n %d\n", q);
printf("The Remainder of the Quotient is \n %d\n", r);
printf("Enter two integers to be multiplied\n");
scanf("%d %d",&c,&d);
e=c*d;
printf("The Product of the two integers is \n %d\n", e);
printf("Enter two integers to be subtracted\n");
scanf("%d %d",&f,&g);
h=f-g;
printf("The Difference of the two integers is \n %d\n", h);


}