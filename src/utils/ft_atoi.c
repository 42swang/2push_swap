/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 08:20:58 by swang             #+#    #+#             */
/*   Updated: 2021/07/29 09:15:39 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

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
	if (-2147483648 > (minus * num) || (minus * num) > 2147483647)
		return (0);
	return (minus * num);
}
