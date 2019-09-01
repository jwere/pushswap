/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_elem_toupper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 13:39:24 by jwere             #+#    #+#             */
/*   Updated: 2018/06/13 13:32:55 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_elem_toupper(t_list *elem)
{
	char	*str;
	int		i;

	if (elem == NULL)
		return ;
	i = 0;
	str = (char *)elem->content;
	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
	return ;
}
