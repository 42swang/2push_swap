#include "../../include/push_swap.h"

static void	move_to_top(t_list *a, int time)
{
	if (time > 3)
	{
		while (time++ <= 5)
			rra(a);
	}
	else
	{	
		while (--time > 0)
			ra(a);
	}
}

void	sort_five(t_list *a, t_list *b)
{
	int	time;
	
	time = find_min(a); //젤 작은애가 몇번째에 있는지 반환하는 함수
	move_to_top(a, time);
	if (issort(a))
		return ;
	pb(a,b);
	time = find_min(a);
	move_to_top(a, time);
	pb(a,b);
	sort_three(a);
	pa(b,a);
	pa(b,a);
}