/* This Program Prints a sequence of numbers in each row
   First Row prints the first "num" integers input by user up to "num"
   And each subsequent row below prints the first "num-1" integers
   up to "num-1"
	Written By: James Murphy, N00655192
	Date: 11/3/2017
*/

#include <stdio.h>

int main()
{
        int rows, i, number_of_rows, num;
	printf("Enter an Integer: ");
	scanf("%d", &num);
        number_of_rows = num;
	
for (rows=num; rows <= number_of_rows; rows--)
	{
	if (rows > 0)
		{
		for (i=1; i <= rows; i++)
			{
			printf("%d ", i);
			}
		printf("\n");
		num = num - 1;
		}
	else
		{
		break;
		}
	}
return 0;
}