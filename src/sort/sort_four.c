#include "../../include/push_swap.h"

static void	move_to_top(t_list *a, int time)
{
	if (time > 2)
	{
		while (time++ <= 4)
			rra(a);
	}
	else
	{	
		while (--time > 0)
			ra(a);
	}
}

void	sort_four(t_list *a, t_list *b)
{
	int	time;

	time = find_min(a);
	move_to_top(a, time);
	if (issort(a))
		return ;
	pb(a, b);
	sort_three(a);
	pa(b, a);
}