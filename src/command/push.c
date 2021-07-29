/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 08:17:48 by swang             #+#    #+#             */
/*   Updated: 2021/07/29 08:18:40 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	pa(t_list *b, t_list *a)
{
	push(b, a);
	a->count += 1;
	b->count -= 1;
	write(1, "pa\n", 3);
}

void	pb(t_list *a, t_list *b)
{
	push(a, b);
	a->count -= 1;
	b->count += 1;
	write(1, "pb\n", 3);
}

void	push(t_list *start, t_list *dest)
{
	if (dest->head == 0)
	{
		dest->tail = start->head;
		start->head->next->prev = 0;
		start->pointer = start->head->next;
		start->head->next = 0;
		dest->head = start->head;
		start->head = start->pointer;
	}
	else if (start->head->next == 0)
	{
		dest->head->prev = start->head;
		start->head->next = dest->head;
		dest->head = start->head;
		start->head = 0;
	}
	else
	{
		start->pointer = start->head->next;
		start->head->next->prev = 0;
		dest->head->prev = start->head;
		start->head->next = dest->head;
		dest->head = start->head;
		start->head = start->pointer;
	}
}
