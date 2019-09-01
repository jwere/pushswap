/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 13:54:55 by jwere             #+#    #+#             */
/*   Updated: 2018/08/22 16:39:10 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_node(t_ilist **alst)
{
	t_ilist *temp;
	int		n;

	n = 1;
	if (*alst && (*alst)->next)
	{
		temp = (*alst)->next;
		(*alst)->next = temp->next;
		temp->next = *alst;
		*alst = temp;
	}
}
