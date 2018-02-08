//Swap Program, N00655192
#include<stdio.h>
main()
{
int a, b, c;
printf("Enter two integers    ");
scanf("%d%d",&a,&b);
if (a > b)
	{
	c=a;
	a=b;
	b=c;
	printf("%d > %d   a=%d   b=%d\n", b, a, a, b);
}
else if (a < b)
	{
	c=b-a;
	printf("%d < %d  c= b-a  c=%d\n", a, b, c);
}
else
	{
	c=b+a;
	printf("%d = %d  c= b+a  c=%d\n", a, b, c);
}
}