#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - generates a random number and outputs
 *        if that number is positive, negative, or zero.
 *
 * Return: exit function
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%d is positive\n");
}
if (n < 0)
{
printf("%d is negative\n");
}
if (n == 0)
{
printf("%d is zero");
}
return (0);
}
