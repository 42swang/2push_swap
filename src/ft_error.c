/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 08:23:04 by swang             #+#    #+#             */
/*   Updated: 2021/07/29 08:23:07 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_error(int i, t_list *list)
{
	t_node	*p;
	t_node	*tmp;

	if (i == -1)
	{
		write(1, "Error\n", 6);
		exit(0);
	}
	p = list->tail;
	while (p != 0)
	{
		tmp = p;
		p = p->prev;
		free(tmp);
		tmp = 0;
	}
	free(list);
	list = 0;
	write(1, "Error\n", 6);
	exit(0);
}
