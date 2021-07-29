/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 08:19:42 by swang             #+#    #+#             */
/*   Updated: 2021/07/29 08:51:48 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	find_node(t_list *list, int index)
{
	t_node	*target;
	int		find;

	find = 1;
	target = list->head;
	while (target != 0)
	{
		if (target->idx == index)
			break ;
		target = target->next;
		find++;
	}
	return (find);
}
