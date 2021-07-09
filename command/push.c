#include "../include/push_swap.h"

void	push(t_stack **start, t_stack **dest)
{
	t_stack	*start_new_top;

	start_new_top = start->next;
	start_new_top->prev = 0;
	start->next = dest;
	if (dest != 0)
		dest->prev = start;
	dest = start;
	start = start_new_top;
	start_new_top = 0;
}
