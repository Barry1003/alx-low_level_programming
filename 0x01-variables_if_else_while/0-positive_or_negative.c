#include <stdlib.h>
#include <time.h>
/* more headers goes there 
 * this give moreexplanation on how to execute if statement
 *
 * betty style doc for function main goes there 
 */
	
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("&d in greater than zero\n", n);
	}
	else if (n == 0)
	{
		printf ("&d is equals to zero\n", n);
	}
	else
	{
		printf("&d is negative\n", n);
	}
	return (0);
}
