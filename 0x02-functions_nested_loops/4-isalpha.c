#include "main.h"
/**
*_isalpha - Checks if a character is alpha.
* @x : character's checker                                                      * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise.
*/
int _isalpha(int x)
{
if ((x >= 'a' && x <= 'z') ||
(x >= 'A' && x <= 'Z'))
return (1);
else
return (0);
}
