/* This Program rounds a number input by user with 4 or more
   decimal places to 3 decimal places and prints the result
	Written By: James Murphy, N00655192
	Date: 11/3/2017
*/
#include<stdio.h>

float roundnumber(float num);
float main()
{
float x;
printf("Enter a number with 4 or more decimal places: ");
scanf("%f", &x);
x=roundnumber(x);
printf("Your number rounded to 3 decimal places is: %.3f\n", x);
return 0;
}

float roundnumber(float num)
	{
	int hold;
	num=num*10000;
	num=num+5;
	num=num/10;
	hold=num;
	num=hold;
	num=num/1000;
	return num;
	}