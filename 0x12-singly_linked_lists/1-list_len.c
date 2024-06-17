#include "lists.h"
/**
 * list_len - print the len of string
 * @h: ptr of node
 * Return: the node
 */

size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
