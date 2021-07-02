#include "holberton.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 *
 * @a: pointer of array int
 * @n: the number of elements to swap
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
int i = 0;
int j = 0;
int *start, *finish;
int aux = 0;

start = a;
finish = a;
n -= 1;
while (i < n)
i += 1;
while (j <= i)
{
aux = *(start + j);
*(start + j) = *(finish + i);
*(finish + i) = aux;
j++;
i--;
}
}
