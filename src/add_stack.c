#include "../include/push_swap.h"

void	add_stack(t_stack **s, t_info *info, char *str)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	new->data = ft_atoi(str);
	//printf("/%d/\n", ft_atoi(str)); //atoi변환체크
	new->next = 0;
	new->prev = 0;
	if (!(*s))
	{
		*s = new;
		info->top = *s;
		info->bot = *s;
		info->size = 1;
	}
	else
	{
		(*s)->next = new;
		new->prev = (*s);
		*s = new;
		info->bot = *s;
		info->size += 1;
	}
	new = 0;
}
