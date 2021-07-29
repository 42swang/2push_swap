/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 08:35:52 by swang             #+#    #+#             */
/*   Updated: 2021/07/29 08:50:05 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	count_find(t_list *list)
{
	int	find;

	find = 1;
	list->pointer = list->head;
	while (list->pointer != 0)
	{
		if (list->pointer->idx == list->mini->idx)
			break ;
		list->pointer = list->pointer->next;
		find++;
	}
	return (find);
}

int	find_min(t_list *list)
{
	t_node	*i;
	t_node	*j;

	i = list->head;
	j = i->next;
	list->mini = list->head;
	while (j != 0)
	{
		if (i->idx > j->idx)
		{
			list->mini = j;
			i = j;
		}
		j = j->next;
	}
	return (count_find(list));
}
