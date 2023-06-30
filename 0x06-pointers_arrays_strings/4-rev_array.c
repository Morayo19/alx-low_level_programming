#include "main.h"
/**
 * reverse_array - Code reverses an array of int
 * @a: an array.
 * @n: the number of elements in an array.
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
