/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 12:33:23 by jwere             #+#    #+#             */
/*   Updated: 2018/06/27 09:04:36 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	j = 0;
	if (!(char *)s)
		return (0);
	if (!(arr = (char**)malloc(sizeof(char*) * (ft_word_nbr(s, c) + 1))))
		return (0);
	while ((char)s[i] && j < ft_word_nbr((const char *)s, c))
	{
		if ((char)s[i++] == c)
			k = i;
		else
		{
			while ((char)s[i] != c && (char)s[i] != '\0')
				i++;
			arr[j++] = ft_strsub(s, (unsigned int)k, (i - k));
		}
	}
	arr[j] = NULL;
	return (arr);
}
