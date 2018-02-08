#include<stdio.h>
int main(void)
{
  float v;
  int con, r_value, mul;
  printf("Please enter a value to be rounded: ");
  scanf("%f", &v);
  mul=v*10000;
  con=mul%10;
  r_value=mul/10;
  if(con>=5)
  {
  r_value=r_value+1;
  v=r_value;
  v=v/1000;
  }
  else {
  r_value=r_value;
  v=r_value;
  v=v/1000;
  }
  printf("The rounded value is %.3d", v);

  return 0;
}