#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j;
int d;
int e;

for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
for (c = 0; c <= 9; c++)
{
for (d = 0; d <= 9; d++)
{
if (c < a || c < b || d < b)
{ continue; }
else if (a == c && b == d)
{ continue; }
putchar(a + '0');
putchar(b + '0');
putchar(' ');
putchar(c + '0');
putchar(d + '0');
if (a == 9 && b == 8 && c == 9 && d == 9)
{ break; }
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
