#include "../../include/push_swap.h"

int	issort(t_list *a)
{
	t_node	*i;
	i = a->head;
	while (i != 0)
	{
		if (i->next != 0 && i->data > i->next->data)
			return (0);
		else
			i = i->next;
	}
	return (1);
}