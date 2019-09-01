/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_pos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 14:33:34 by jwere             #+#    #+#             */
/*   Updated: 2018/08/22 16:47:29 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		min_pos(t_ilist *lst, int min)
{
	int		p;
	t_ilist *temp;

	p = 0;
	temp = lst;
	while (temp && temp->data != min)
	{
		temp = temp->next;
		p++;
	}
	return (p);
}

int		pos(t_ilist *lst, int m, int n, int p)
{
	int		pos;
	t_ilist *temp;

	pos = 0;
	temp = lst;
	while (temp)
	{
		if (temp->data == m || temp->data == n || temp->data == p)
			break ;
		temp = temp->next;
		pos++;
	}
	return (pos);
}
