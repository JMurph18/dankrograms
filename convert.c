#include<stdio.h>
int main(void)
{
int j;
float f, g;
f=1369.96;
j=f;
printf("%f %d\n", f,j);
g=j;
f=g/10;
printf("%f %d\n", f,j);
return 0;
}