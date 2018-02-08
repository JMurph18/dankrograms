// Leap Year Program, N00655192
#include<stdio.h>
main()
{
int y, a, b, c, d, e, f, s;
printf("Enter the year                                 ");
scanf("%d",&y);
a=y/1000;
b=y%1000;
c=b/100;
d=b%100;
e=d/10;
f=d%10;
s=a+c+e+f;
if (y%400 == 0)
	printf("%d Is a leap year and the sum of the digits is %2d\n",y,s);
else if (y%100 == 0)
	printf("%d Is Not a leap year\n",y);
else if  (y%4 == 0)
	printf("%d Is a leap year and the sum of the digits is %2d\n",y,s);
else
	printf("%d Is Not a leap year\n",y);
}
