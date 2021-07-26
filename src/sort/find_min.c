#include "../../include/push_swap.h"

int	find_min(t_list *list)
{
	t_node	*i;
	t_node	*j;
	int	find;

	i = list->head;
	j = i->next;
	list->mini = list->head;
	list->pointer = list->head;
	while (j != 0)
	{
		if (i->idx > j->idx)
		{
			list->mini = j;
			i = j;
		}
		j = j->next;
	}
	find = 1;
	while (list->pointer != 0)
	{
		if (list->pointer->idx == list->mini->idx)
			break ;
		list->pointer = list->pointer->next;
		find++;
	}
	return (find);
}