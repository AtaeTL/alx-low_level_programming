#include <unistd.h>
#include "main.h"
/**
* Description: Print _putchar followed by a new line.
* Return: 0.
 */
int main(void)
{
char n = "_putchar";
int i;
for (i = 0; i < 9; i++)
_putchar(n[i]);
_putchar('\n');
return (0);
}
