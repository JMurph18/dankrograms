#include <stdio.h>

int main()
{
        int rows, spaces, i, j, k, number, number_of_stars;
        number = 1;
	k=1;
	rows = 3;
	number_of_stars = 6;
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
			
                }
                printf("\n");
		for (spaces=1; spaces <= rows-1; spaces++) 
		{
                        printf(" ");
                }
                for (j=1; j <= k; j++)
		{
                        printf("*");
			number++;
                        
                }
                printf("\n");
                
        return 0;
}
}