/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 08:21:11 by swang             #+#    #+#             */
/*   Updated: 2021/07/29 08:52:30 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*str;
	char	*new;

	len = ft_strlen(s1);
	str = (char *)s1;
	new = ft_calloc(len + 1, sizeof(char));
	if (!new)
		return (NULL);
	while (len--)
		new[len] = str[len];
	return (new);
}
