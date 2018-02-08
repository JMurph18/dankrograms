#include <stdio.h>

int main() {
        int rows, spaces, i, j, number;
        number = 1;
	rows = 3;
	
for (i=1; i <= rows; i++) 
{
		for (spaces=1; spaces <= rows-i; spaces++) 
		{
                        printf(" ");
                }
                for (j=1; j <= i; j++)
		{
                        printf("%d", number);
                        printf(" ");
			number++;
                }
                printf("\n");
		for (spaces=1; spaces <= rows; spaces++) 
{
                        printf(" ");
                }
                for (j=1; j <= i; j++)
		{
                        printf("*");
                        printf(" ");
                }
                printf("\n");
             
        }
        return 0;
}