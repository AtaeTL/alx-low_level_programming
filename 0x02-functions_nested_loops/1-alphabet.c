/*
* File: 1-alphabet.c
*/
#include "main.h"
/**
 * Description : Check the next line
 * print_alphabet : Print the alphabet, in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
_putchar(i);
_putchar('\n');
}
