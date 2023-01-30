#include "lists.h"
/**
* checker - helper function taht checks if stuff matches and if we in a loop
* @head: the head node
* Description: this function will check if we are in a loop
* Return: either Null or where we know a loop exists
*/
listint_t *checker(listint_t *head)
{
listint_t *lagging = NULL;
listint_t *leading = NULL;
lagging = leading = head;
while (lagging)
{
lagging = lagging->next;
leading = leading->next;
if (leading && leading->next)
leading = leading->next;
else
return (NULL);
if (lagging == leading)
return (leading);
}
return (NULL);
}
/**
* find_listint_loop - finds where the loop in a linked list is
* @head: the head node
* Description: this is wrong i havent gotten it yhet
* Return: The address of the node where loop starts or null if none
*/
listint_t *find_listint_loop(listint_t *head)
{
while (checker(head))
{
if (checker(head) == head)
return (head);
head = head->next;
}
return (NULL);
}
