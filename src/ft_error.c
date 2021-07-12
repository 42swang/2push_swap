#include "../include/push_swap.h"

void	ft_error(t_list *stack)
{
	t_node	*p;
	t_node	*tmp;

	p = stack->tail;
	while (p != 0)
	{
		tmp = p;
		p = p->prev;
		free(tmp);
		tmp = 0;
	}
	exit(0);
}