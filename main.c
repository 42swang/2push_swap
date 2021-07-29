/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 08:33:55 by swang             #+#    #+#             */
/*   Updated: 2021/07/29 08:45:05 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		i;

	i = 0;
	if (argc == 1)
		ft_error(-1, NULL);
	stack_a = (t_list *)ft_calloc(1, sizeof(t_list));
	if (!(stack_a))
		ft_error(-1, NULL);
	make_stack(stack_a, argv);
	indexing(stack_a);
	if (issort(stack_a))
		return (0);
	stack_b = (t_list *)ft_calloc(1, sizeof(t_list));
	if (!(stack_b))
		ft_error(-1, stack_a);
	push_swap(stack_a, stack_b);
	ft_free(&stack_a);
	ft_free(&stack_b);
	return (0);
}
