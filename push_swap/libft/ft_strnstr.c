/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_strnstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 12:41:03 by jwere             #+#    #+#             */
/*   Updated: 2018/06/13 08:22:08 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*str;
	char	*to_find;
	size_t	i;
	size_t	j;

	str = (char *)s1;
	to_find = (char *)s2;
	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] && i < n)
	{
		j = 0;
		while (to_find[j] == str[i + j] && str[i + j] && i + j < n)
		{
			j++;
			if (to_find[j] == '\0')
				return (str + i);
		}
		i++;
	}
	return (NULL);
}
