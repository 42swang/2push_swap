#include "../include/push_swap.h"

void	add_node(char *str, t_list *list)
{
	t_node	*new;

	new = (t_node *)ft_calloc(1,sizeof(t_node));
	if (!new)
		ft_error(1, list);
	new->data = ft_atoi(str);
	//printf("/%d/\n", ft_atoi(str)); //atoi변환체크
	if (!(list->head))
	{
		list->head = new;
		list->tail = new;
		list->count = 1;
	}
	else
	{
		list->tail->next = new;
		new->prev = list->tail;
		list->tail = new;
		list->count += 1;
	}
	new = 0;
}
