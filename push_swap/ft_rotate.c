/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 18:17:10 by jwere             #+#    #+#             */
/*   Updated: 2018/08/22 16:37:42 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_ilist **alst)
{
	t_ilist *temp;
	t_ilist *list;

	if (*alst && (*alst)->next)
	{
		list = *alst;
		temp = (*alst)->next;
		while (list->next)
			list = list->next;
		list->next = *alst;
		(*alst)->next = NULL;
		*alst = temp;
	}
}
