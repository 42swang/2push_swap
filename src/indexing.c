/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 08:22:50 by swang             #+#    #+#             */
/*   Updated: 2021/07/29 08:53:24 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	indexing(t_list *list)
{
	int	i;
	int	min;

	i = 0;
	if (list->head->next == 0)
		return ;
	while (i++ < list->count)
	{
		list->pointer = list->head;
		min = 2147483647;
		while (list->pointer != 0)
		{
			if (min >= list->pointer->data && list->pointer->idx == 0)
			{
				min = list->pointer->data;
				list->mini = list->pointer;
			}
			list->pointer = list->pointer->next;
		}
		list->mini->idx = i;
	}
}
