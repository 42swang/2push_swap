#include "../../include/push_swap.h"

void	sa(t_list *a)
{
	swap(a);
	write(1, "sa\n", 3);
}

void	sb(t_list *b)
{
	swap(b);
	write(1, "sb\n", 3);
}

void	ss(t_list *a, t_list *b)
{
	swap(a);
	swap(b);
	write(1, "ss\n", 3);
}

void	swap(t_list *list)
{
	int	tmp;
	int	tmp_idx;

	if (list->head->next != 0)
	{
		tmp_idx = list->head->idx;
		tmp = list->head->data;
		list->head->idx = list->head->next->idx;
		list->head->data = list->head->next->data;
		list->head->next->idx = tmp_idx;
		list->head->next->data = tmp;
	}
	//첫번째 노드와 두번쨰 노드의 값만 변경한다.
}