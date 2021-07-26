#include "../include/push_swap.h"

void	push_swap(t_list *a, t_list *b)
{
	//이미 정렬이 다 되어있을 때는 어떻게 처리하지?
	b->head = 0;
	if (a->count == 2)
		sort_two(a);
	else if (a->count == 3)
		sort_three(a);
	else if (a->count == 5)
		sort_five(a,b);
	else if (a->count == 4)
		sort_four(a,b);
	else if (a->count >= 6)
		sort_many(a,b);
}