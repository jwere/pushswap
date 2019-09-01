/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_join.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 15:11:14 by jwere             #+#    #+#             */
/*   Updated: 2018/08/22 17:16:04 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_array_join(char **arr, char *str)
{
	int		i;
	char	**new;

	i = 0;
	while (arr[i])
		i++;
	new = (char **)malloc(sizeof(char*) * (i + 2));
	i = -1;
	while (arr[++i])
		new[i] = ft_strdup(arr[i]);
	new[i++] = ft_strdup(str);
	new[i] = NULL;
	ft_arraydel(arr);
	ft_strdel(&str);
	return (new);
}
