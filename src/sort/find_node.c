#include "../../include/push_swap.h"

int	find_node(t_list *list, int index)
{
	t_node	*target;
	int	find;

	find = 1;
	target = list->head;
	while (target != 0)
	{
		if (target->idx == index)
			break;
		target = target->next;
		find++;
	}
	return (find);
}