/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 17:05:08 by jwere             #+#    #+#             */
/*   Updated: 2018/06/13 11:39:15 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	size_t	i;

	i = 0;
	if (!s || !f)
		return (0);
	str = ft_strnew(ft_strlen((const char *)s));
	if (!str)
		return (0);
	while ((char)s[i])
	{
		str[i] = (*f)((char)s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
