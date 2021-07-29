/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   issort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 08:19:55 by swang             #+#    #+#             */
/*   Updated: 2021/07/29 08:51:21 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	issort(t_list *a)
{
	t_node	*i;

	i = a->head;
	while (i != 0)
	{
		if (i->next != 0 && i->data > i->next->data)
			return (0);
		else
			i = i->next;
	}
	return (1);
}
