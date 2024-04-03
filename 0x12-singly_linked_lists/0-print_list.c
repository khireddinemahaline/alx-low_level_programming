#include "lists.h"
size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	if (h == NULL)
		printf("[0] (nil)\n");
	struct node *ptr = NULL;
	ptr = h;
	while (ptr != NULL)
	{
		printf("[%d] %s\n", ptr->len, ptr->str);
		nodes++;
		ptr = ptr->next;
	}
	return (nodes);
