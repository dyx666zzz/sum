#include <stdio.h>
#include <stdlib.h>

int main()
{
   int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int sum  = 0;
   for(int i = 0; i <= 10; i++){
	sum += arr[i];
   }
   printf("The sum of array is: %i \n", sum);
   return 0;
}
