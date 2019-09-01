/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_strsplit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 17:21:21 by jwere             #+#    #+#             */
/*   Updated: 2018/08/06 11:41:10 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lst_strsplit(char const *s, char c)
{
	t_list	*list;
	t_list	*temp;
	char	**arr;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	arr = ft_strsplit(s, c);
	if (!(list = ft_lstnew(arr[i], ft_strlen(arr[i]) + 1)))
		return (NULL);
	i++;
	while (arr[i])
	{
		if (!(temp = ft_lstnew(arr[i], ft_strlen(arr[i]) + 1)))
			return (NULL);
		ft_lstadd_end(&list, temp);
		i++;
	}
	while (i >= 0)
		ft_strdel(&arr[i--]);
	free(arr);
	return (list);
}
