/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 18:15:53 by jwere             #+#    #+#             */
/*   Updated: 2018/06/13 08:29:12 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		answer;

	answer = 0;
	i = 0;
	if (n == 1)
		answer = (unsigned char)s1[i] - (unsigned char)s2[i];
	if (n > 1)
	{
		while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
			i++;
		answer = (unsigned char)s1[i] - (unsigned char)s2[i];
	}
	return (answer);
}
