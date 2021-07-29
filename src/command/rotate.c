/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 08:19:23 by swang             #+#    #+#             */
/*   Updated: 2021/07/29 08:45:58 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ra(t_list *a)
{
	rotate(a);
	write(1, "ra\n", 3);
}

void	rb(t_list *b)
{
	rotate(b);
	write(1, "rb\n", 3);
}

void	rr(t_list *a, t_list *b)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
}

void	rotate(t_list *list)
{
	t_node	*temp;

	if (list->head->next->next == 0)
		swap(list);
	else
	{
		temp = list->head->next;
		list->tail->next = list->head;
		list->head->prev = list->tail;
		list->head->next->prev = 0;
		list->head->next = 0;
		list->tail = list->head;
		list->head = temp;
	}
}
