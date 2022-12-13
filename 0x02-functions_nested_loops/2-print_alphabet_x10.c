#include "main.h"
/**
* print_alphabet_x10 - Print 10 times the alphabet, in lowercase.
*                                                                                                                                     
* Return: Always 0. 
*/
void print_alphabet_x10(void)
{
int count;
char l;
for (count = 0; count <= 9; count++)
{
for (l = 'a'; l <= 'z'; l++)
_putchar(l);_putchar('\n');
}
}
