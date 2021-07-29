/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 08:20:29 by swang             #+#    #+#             */
/*   Updated: 2021/07/29 08:20:29 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	sort_three(t_list *a)
{
	if (a->head->data > a->head->next->data)
	{
		if (a->head->data > a->head->next->next->data)
			ra(a);
		if (a->head->data > a->head->next->data)
			sa(a);
	}
	else
	{
		rra(a);
		if (a->head->data > a->head->next->data)
			sa(a);
	}
}
