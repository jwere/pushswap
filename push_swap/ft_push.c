/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 18:15:51 by jwere             #+#    #+#             */
/*   Updated: 2018/08/22 16:42:27 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_ilist **from, t_ilist **to)
{
	t_ilist *temp;

	if (!*from)
		return ;
	temp = (*from)->next;
	if (*to == NULL)
	{
		(*from)->next = NULL;
		*to = *from;
		*from = temp;
	}
	else
	{
		(*from)->next = *to;
		*to = *from;
		*from = temp;
	}
}
