/*
* File: 1-alphabet.c
*/
#include "main.h"
/**
 * print_alphabet : Print the alphabet, in lowercase, followed by a new line.
 * Description: It prints the alphabet in lowercase fallowed by a new line
 * Return: Nothing.
 */
void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
_putchar(i);
_putchar('\n');
}
