/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 08:23:16 by swang             #+#    #+#             */
/*   Updated: 2021/07/29 09:02:17 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	make_stack(t_list *a, char **argv)
{
	char	**arr;
	int		i;
	int		j;

	i = 1;
	while (argv[i])
	{	
		check_str(argv[i], a);
		arr = ft_split(argv[i], ' ');
		if (!arr)
			ft_error(1, a);
		j = 0;
		while (arr[j])
		{	
			check_digit(arr[j], a);
			check_int(arr[j], a);
			add_node(arr[j], a);
			free(arr[j]);
			j++;
		}
		free(arr);
		arr = 0;
		i++;
	}
	check_same(a);
}
