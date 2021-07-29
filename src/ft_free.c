/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 08:22:44 by swang             #+#    #+#             */
/*   Updated: 2021/07/29 08:53:41 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_free(t_list **list)
{
	t_node	*p;
	t_node	*temp;

	p = (*list)->head;
	while (p != 0)
	{
		temp = p;
		p = p->next;
		free(temp);
		temp = 0;
	}
	p = 0;
	free(*list);
	*list = 0;
}
