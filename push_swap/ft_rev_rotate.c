/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 18:18:27 by jwere             #+#    #+#             */
/*   Updated: 2018/08/22 16:36:31 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rev_rotate(t_ilist **alst)
{
	t_ilist *temp;
	t_ilist *lst;

	if (!*alst || !(*alst)->next)
		return ;
	if (ft_ilstsize(*alst) == 2)
		ft_rotate(alst);
	if (*alst && (*alst)->next->next)
	{
		lst = *alst;
		while (lst->next->next)
			lst = lst->next;
		temp = lst->next;
		lst->next = NULL;
		temp->next = *alst;
		*alst = temp;
	}
}
