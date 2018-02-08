#include <stdio.h>
 
int string_length(char []);
 
int main()
{
   char s[100];
   int n, c, first, last, middle, search, array[100];
   printf("Input a string\n");
   gets(s);
   n = string_length(s);
   for (c = 0; c < n; c++)
	{
    scanf("%d",&array[c]);
	}
   printf("Enter value to find\n");
   scanf("%d", &search); 
   first = 0;
   last = n - 1;
   middle = (first+last)/2;
 
   while (first <= last) {
      if (array[middle] < search)
         first = middle + 1;    
      else if (array[middle] == search) {
         printf("%d found at location %d.\n", search, middle+1);
         break;
      }
      else
         last = middle - 1;
 
      middle = (first + last)/2;
   }
   if (first > last)
      printf("Not found! %d is not present in the list.\n", search);
   return 0;
}
int string_length(char s[]) {
   int c = 0;
   while (s[c] != '\0')
      c++;
   return c;
}
