/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 02:20:52 by swang             #+#    #+#             */
/*   Updated: 2021/07/08 16:29:46 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			minus;
	int			sign;
	long long	num;

	i = 0;
	minus = 1;
	sign = 0;
	num = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus = -1;
		sign++;
		i++;
	}
	while (ft_isdigit(str[i]))
		num = (10 * num) + (str[i++] - '0');
	if (-2147483648 > num || num > 2147483647)
		return (0);
	return (minus * num);
}
