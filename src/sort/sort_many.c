/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_many.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 08:50:12 by swang             #+#    #+#             */
/*   Updated: 2021/07/29 08:51:10 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	move_to_top_b(t_list *list, int time)
{
	if (list->count == 1)
		return ;
	if (time == 2)
		sb(list);
	else if (time > list->count / 2)
	{
		while (time++ <= list->count)
			rrb(list);
	}
	else
	{	
		while (--time > 0)
			rb(list);
	}
}

static void	move_to_top_a(t_list *list, int time)
{
	if (list->count == 1)
		return ;
	if (time == 2)
		sa(list);
	else if (time > list->count / 2)
	{
		while (time++ <= list->count)
			rra(list);
	}
	else
	{	
		while (--time > 0)
			ra(list);
	}
}

void	sort_atob(t_list *a, t_list *b, int all_count)
{
	int	i;
	int	find;
	int	chunk;

	i = all_count / 10;
	while (i <= all_count)
	{
		a->pointer = a->head;
		chunk = all_count / 10;
		while (a->pointer != 0 && 0 < chunk)
		{
			if (0 < a->pointer->idx && a->pointer->idx <= i)
			{
				find = find_node(a, a->pointer->idx);
				move_to_top_a(a, find);
				pb(a, b);
				a->pointer = a->head;
				chunk--;
			}
			else
				a->pointer = a->pointer->next;
		}
		i += (all_count / 10);
	}
}

void	sort_btoa(t_list *a, t_list *b)
{
	int	find;
	int	b_to_a;

	b_to_a = b->count;
	b->pointer = b->head;
	while (b_to_a > 0)
	{
		if (b_to_a == b->pointer->idx)
		{
			find = find_node(b, b_to_a);
			move_to_top_b(b, find);
			pa(b, a);
			b->pointer = b->head;
			b_to_a--;
		}
		else
			b->pointer = b->pointer->next;
	}
}

void	sort_many(t_list *a, t_list *b)
{
	int	all_count;

	all_count = a->count;
	sort_atob(a, b, all_count);
	sort_btoa(a, b);
}
