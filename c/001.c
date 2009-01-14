/* Project Euler: Problem 1 */
/* Find the sum of all the multiples of 3 or 5 below 1000. */
#include <stdio.h>

int main(int argc, char* argv[])
{
  int i=1;
  int sum = 0 ;
  for (; i < 1000 ; i++)
    {
      if ( i % 3 == 0  || i % 5 == 0 )
      {
	sum += i;
      }
    }
  printf("Sum of multiples of 3 or 5 below 1000 is : %d \n", sum);
  return 0;
}

