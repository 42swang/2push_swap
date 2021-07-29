/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 08:20:01 by swang             #+#    #+#             */
/*   Updated: 2021/07/29 12:02:15 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	move_to_top(t_list *a, int time)
{
	if (time == 1)
		return ;
	else if (time == 2)
		sa(a);
	else if (time > 2)
	{
		while (time++ <= a->count)
			rra(a);
	}
}

void	sort_five(t_list *a, t_list *b)
{
	int	time;

	time = find_min(a);
	move_to_top(a, time);
	if (issort(a))
		return ;
	pb(a, b);
	time = find_min(a);
	move_to_top(a, time);
	pb(a, b);
	sort_three(a);
	pa(b, a);
	pa(b, a);
}
