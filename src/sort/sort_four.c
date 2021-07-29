/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 08:20:14 by swang             #+#    #+#             */
/*   Updated: 2021/07/29 11:34:52 by swang            ###   ########.fr       */
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
		while (time++ <= 4)
			rra(a);
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
