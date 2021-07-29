/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 08:33:41 by swang             #+#    #+#             */
/*   Updated: 2021/07/29 16:06:39 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	push_swap(t_list *a, t_list *b)
{
	if (a->count == 2)
		sort_two(a);
	else if (a->count == 3)
		sort_three(a);
	else if (a->count == 4)
		sort_four(a, b);
	else if (a->count == 5)
		sort_five(a, b);
	else if (a->count > 5)
		sort_many(a, b);
}
