#include "../include/push_swap.h"

void	ft_free(t_list *list)
{
	t_node	*p;
	t_node	*temp;

	p = list->head;
	while (p != 0)
	{
		temp = p;
		p = p->next;
		free(temp);
		temp = 0;
	}
	free(list);
	list = 0;
}