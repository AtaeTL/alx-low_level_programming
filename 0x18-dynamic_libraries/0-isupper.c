#include "main.h"
/**
* _isupper - check if a character is uppercase
* @n: int is the char
* Return: 1 if the input n is uppercase, 0 is otherwise
*/
int _isupper(int n)
{
int isUpper = 0;
if (n >= 'A' && n <= 'Z')
isUpper = 1;
return (isUpper);
}
