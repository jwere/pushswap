/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 15:25:33 by jwere             #+#    #+#             */
/*   Updated: 2018/08/07 08:48:49 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_lstsize(t_list *list)
{
	t_list *temp;
	size_t size;

	size = 0;
	if (list == NULL)
		return (0);
	temp = list;
	while (temp != NULL)
	{
		temp = temp->next;
		size++;
	}
	return (size);
}
