#include "../include/push_swap.h"

void	add_node(t_list **s, char *str)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	new->data = ft_atoi(str);
	//printf("/%d/\n", ft_atoi(str)); //atoi변환체크
	new->next = 0;
	new->prev = 0;
	new->idx = 0;
	if (!(*s))
	{
		*s = new;
		(*s)->size = 1;
		(*s)->curr = new;
		(*s)->head = new;
		(*s)->tail = new;
	}
	else
	{
		(*s)->tail->next = new;
		new->prev = (*s)->tail;
		(*s)->curr = new;
		(*s)->size += 1;
	}
	new = 0;
}
