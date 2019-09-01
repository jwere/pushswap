/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 18:19:22 by jwere             #+#    #+#             */
/*   Updated: 2018/06/13 12:49:15 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	char	*trim;
	size_t	i;
	size_t	start;
	size_t	k;

	str = (char *)s;
	if (!str)
		return (0);
	i = 0;
	while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
		i++;
	start = i;
	while (str[i] != '\0')
		i++;
	k = i;
	i--;
	while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
		i--;
	trim = ft_strsub(s, (unsigned int)start, (i - start + 1));
	if (start > 0 && start == k)
		trim = ft_strnew(0);
	if (!trim)
		return (NULL);
	return (trim);
}
