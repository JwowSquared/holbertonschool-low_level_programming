#include "holberton.h"

/**
* reverse_array - reverses an input array of integer with n size
* @a: pointer to input array
* @n: size of array
*/
void reverse_array(int *a, int n)
{
	int left = 0;
	int right = n - 1;
	int temp;

	for (left = 0; left < n / 2; left++)
	{
		temp = a[right];
		a[right] = a[left];
		a[left] = temp;
		right--;
	}
}
