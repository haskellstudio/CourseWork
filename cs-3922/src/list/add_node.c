#include "../../include/list.h"

void add_node(struct s_node* node, struct s_node** head)
{
	if (node == NULL)
		return;

	if (node->elem == NULL)
		return;

	if (head == NULL)
	{
		node->next = NULL;
		node->prev = NULL;
	}

	else
	{
		node->next = *head;
		node->prev = NULL;
		
	}
}
