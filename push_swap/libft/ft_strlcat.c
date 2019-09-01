/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 06:52:12 by jwere             #+#    #+#             */
/*   Updated: 2018/06/13 10:16:15 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		j;
	size_t		len;

	i = 0;
	j = 0;
	i = ft_strlen((const char *)dst);
	len = i;
	if (i > dstsize)
		len = dstsize;
	len = len + ft_strlen(src);
	if (dstsize > 0)
		while ((j + i) < (dstsize - 1) && src[j])
		{
			dst[i + j] = src[j];
			j++;
		}
	dst[i + j] = '\0';
	return (len);
}
