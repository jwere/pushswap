/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 13:45:40 by jwere             #+#    #+#             */
/*   Updated: 2018/06/13 13:21:42 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	len1;
	size_t	len2;

	if (s1 && s2)
	{
		len1 = ft_strlen((const char *)s1);
		len2 = ft_strlen((const char *)s2);
		s = ft_strnew(len1 + len2);
		if (!s)
			return (NULL);
		s = ft_strcpy(s, (const char *)s1);
		s = ft_strcat(s, (const char *)s2);
		return (s);
	}
	return (NULL);
}
