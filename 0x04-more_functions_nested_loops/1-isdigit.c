#include "main.h"
/**
 * _isdigit - check if a character is an digit (0 to 9)
 * @n: int to be tested
 * Return: 1 if n is a digit, 0 if otherwise
 */
int _isdigit(int n)
{
int x = 0;
if (n >= '0' && n <= '9')	
x = 1;
return (x);
}
