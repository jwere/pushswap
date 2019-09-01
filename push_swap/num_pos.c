/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_pos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 14:33:34 by jwere             #+#    #+#             */
/*   Updated: 2018/08/22 16:48:43 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		upnum_pos(t_ilist *lst, int min)
{
	int		p;
	t_ilist *temp;

	p = 0;
	temp = lst;
	while (temp && temp->data > min)
	{
		temp = temp->next;
		p++;
	}
	return (p);
}

int		num_pos(t_ilist *lst, int min)
{
	int		p;
	t_ilist *temp;

	ft_ilstrev(&lst);
	p = 0;
	temp = lst;
	while (temp && temp->data > min)
	{
		temp = temp->next;
		p++;
	}
	ft_ilstrev(&lst);
	if (p >= upnum_pos(lst, min))
		return (1);
	else
		return (0);
}
