/* This Program calculates the Area and Circumference
   based on the radius inputed by the user.
	Written By: James Murphy N00655192
	Date: 8/31/17
*/

#include<stdio.h>
main()
	{
float r, A, C;
printf("\nEnter the Radius\n");
scanf("%f",&r);
A=3.14*r*r;
C=2*3.14*r;
printf("The Area of the Circle is \n %f\n", A);
printf("The Circumference of the Circle is \n %f\n", C);

}