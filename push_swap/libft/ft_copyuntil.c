/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copyuntil.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 14:59:54 by jwere             #+#    #+#             */
/*   Updated: 2018/06/13 10:37:02 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_copyuntil(char **dst, char *src, char c)
{
	int		i;
	char	*temp;

	i = -1;
	while (src[++i])
		if (src[i] == c)
			break ;
	temp = ft_strndup((const char *)src, i);
	if (!(*dst = ft_strjoin(*dst, temp)))
		return (0);
	ft_strdel(&temp);
	return (i);
}
