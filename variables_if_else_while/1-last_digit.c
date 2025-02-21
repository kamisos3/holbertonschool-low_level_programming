#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-Displaying last digit
 * Return:
 * Always 0
 */
int main(void)
 {
	int n;	


	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int lastdigit = n % 10	 
	if (lastdigit > 5);
	{
		printf("Last digit of %d is %d and is greater than 5\n",        n, lastdigit);
	}
	if (lastdigit == 0);	
	{
		printf("Last digit of %d is 0\n", n, lastdigit);
	}
	if (lastdigit < 6);
	{
		printf("Last digit of %d is less and 6 and not 0\n", n,
		lastdigit);
	}
		return (0);
}
