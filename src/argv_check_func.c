/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv_check_func.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 08:21:54 by swang             #+#    #+#             */
/*   Updated: 2021/07/29 09:17:59 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	check_str(char *str, t_list *a)
{
	int	space;

	if (ft_strlen(str) == 0)
		ft_error(1, a);
	space = check_space(str);
	if (space < 0)
		ft_error(1, a);
}

int	check_space(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] != ' ')
			return (i);
		i++;
	}
	return (-1);
}

void	check_same(t_list *list)
{
	t_node	*i;
	t_node	*j;

	i = list->head;
	while (i != 0)
	{
		j = i->next;
		while (j != 0)
		{
			if (i->data == j->data)
				ft_error(1, list);
			else
				j = j->next;
		}
		i = i->next;
	}
}

void	check_digit(char *str, t_list *a)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i == 0 && (str[i] == '-' || str[i] == '+'))
			i++;
		if (!(ft_isdigit(str[i])))
			ft_error(1, a);
		i++;
	}
}

void	check_int(char *str, t_list *a)
{
	int	nbr;
	int	i;

	nbr = ft_atoi(str);
	i = 0;
	if (nbr == 0)
	{
		if (str[0] == '-' || str[0] == '+')
			i++;
		while (str[i])
		{
			if (str[i] != '0')
				ft_error(1, a);
			i++;
		}
	}
}
