#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: All single digit numbers of base 10
 * Return: Always 0 (success)
 */
int main(void)
{
int d;
for (d = '0'; d <= '9'; d++)
putchar(d);
putchar('\n');
return (0);
}
