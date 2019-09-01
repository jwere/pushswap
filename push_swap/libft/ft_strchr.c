/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:44:06 by jwere             #+#    #+#             */
/*   Updated: 2018/06/12 17:32:55 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;
	char	*str;
	size_t	i;

	ch = (char)c;
	str = (char *)s;
	i = 0;
	while (i <= ft_strlen(str))
	{
		if (str[i] == ch)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
