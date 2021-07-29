/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 08:21:16 by swang             #+#    #+#             */
/*   Updated: 2021/07/29 08:52:19 by swang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

char	*ft_substr(char const *s, unsigned int start, int len)
{
	int		sub_len;
	int		i;
	char	*str;

	if (s == 0)
		return (NULL);
	if ((unsigned int)ft_strlen(s) <= start)
		return (ft_strdup(""));
	sub_len = len;
	if (ft_strlen(s + start) < len)
		sub_len = ft_strlen(s + start);
	str = ft_calloc(sub_len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < sub_len)
		str[i++] = s[start++];
	return (str);
}
