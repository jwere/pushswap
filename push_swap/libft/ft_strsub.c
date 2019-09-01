/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 14:32:15 by jwere             #+#    #+#             */
/*   Updated: 2018/06/13 12:10:53 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (s && &s[start] && &s[len])
	{
		str = ft_strnew(len);
		if (!str)
			return (0);
		str = ft_strncpy(str, &s[start], len);
		if (str)
			return (str);
	}
	return (0);
}
