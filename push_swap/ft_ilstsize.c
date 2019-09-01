/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilstsize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 15:25:33 by jwere             #+#    #+#             */
/*   Updated: 2018/08/22 16:30:50 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t		ft_ilstsize(t_ilist *list)
{
	t_ilist	*temp;
	size_t	size;

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
