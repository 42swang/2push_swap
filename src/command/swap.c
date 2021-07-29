/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 08:19:28 by swang             #+#    #+#             */
/*   Updated: 2021/07/29 08:46:17 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	sa(t_list *a)
{
	swap(a);
	write(1, "sa\n", 3);
}

void	sb(t_list *b)
{
	swap(b);
	write(1, "sb\n", 3);
}

void	ss(t_list *a, t_list *b)
{
	swap(a);
	swap(b);
	write(1, "ss\n", 3);
}

void	swap(t_list *list)
{
	int	tmp;
	int	tmp_idx;

	if (list->head->next != 0)
	{
		tmp_idx = list->head->idx;
		tmp = list->head->data;
		list->head->idx = list->head->next->idx;
		list->head->data = list->head->next->data;
		list->head->next->idx = tmp_idx;
		list->head->next->data = tmp;
	}
}
