/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_words.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 12:01:40 by jwere             #+#    #+#             */
/*   Updated: 2018/08/23 15:53:51 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

size_t		ft_words(const char *str)
{
	size_t i;
	size_t words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (check(str[i]))
			i++;
		else
		{
			if (str[i] != '\0')
				words++;
			while (!check(str[i]) && str[i])
				i++;
		}
	}
	return (words);
}
