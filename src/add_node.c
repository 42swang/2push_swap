/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 08:21:49 by swang             #+#    #+#             */
/*   Updated: 2021/07/29 08:53:53 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	add_node(char *str, t_list *list)
{
	t_node	*new;

	new = (t_node *)ft_calloc(1, sizeof(t_node));
	if (!new)
		ft_error(1, list);
	new->data = ft_atoi(str);
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
