#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
int b;
int d;

for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
for (d = 0; d <= 9; d++)
{
if (a >= b || b >= d)
{ continue; }
putchar(a + '0');
putchar(b + '0');
putchar(d + '0');
if (a == 7)
{ break; }
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
