#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description : Numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;
char low;
for (x = '0'; x <= '9'; x++)
putchar(x);
for (low = 'a'; low <= 'f'; low++)
putchar(low);
putchar('\n');
return (0);
}
