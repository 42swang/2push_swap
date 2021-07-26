#include "../../include/push_swap.h"

void	rra(t_list *a)
{
	r_rotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_list *b)
{
	r_rotate(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_list *a, t_list *b)
{
	r_rotate(a);
	r_rotate(b);
	write(1, "rrr\n", 4);
}


void	r_rotate(t_list *list)
{
	t_node	*temp;

	if (list->tail->prev->prev == 0)
		swap(list);
	else
	{
		temp = list->tail->prev;
		list->tail->next = list->head;
		list->head->prev = list->tail;
		list->tail->prev->next = 0;
		list->tail->prev = 0;
		list->head = list->tail;
		list->tail = temp;
	}
}