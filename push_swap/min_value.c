/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_value.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 12:13:52 by jwere             #+#    #+#             */
/*   Updated: 2018/08/22 16:57:55 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		min_value(t_ilist *lst)
{
	int		min;
	t_ilist *temp;

	temp = lst;
	min = temp->data;
	while (temp)
	{
		if (temp->data < min)
			min = temp->data;
		temp = temp->next;
	}
	return (min);
}

void	sort_1(t_ilist **a, t_ilist **b)
{
	ft_p(a, b, 'a');
	ft_s(b, 'b');
	ft_p(a, b, 'b');
}

void	sort_2(t_ilist **a, t_ilist **b)
{
	ft_s(b, 'b');
	sort_1(a, b);
	ft_s(b, 'b');
}

void	sort_three(t_ilist **a, t_ilist **b)
{
	int y;
	int z;

	y = (*b)->next->data;
	z = (*b)->next->next->data;
	if ((*b)->data > y && y > z)
		return ;
	if (ft_ilstsize(*b) == 2 && (*b)->data < y)
		ft_s(b, 'b');
	else if ((*b)->data > y && y < z && (*b)->data > z)
		sort_1(a, b);
	else if ((*b)->data < y && y < z)
		sort_2(a, b);
	else if ((*b)->data < y && y > z && (*b)->data < z)
	{
		sort_1(a, b);
		ft_s(b, 'b');
	}
	else if ((*b)->data > y && y < z && (*b)->data < z)
	{
		sort_1(a, b);
		ft_s(b, 'b');
	}
	else if ((*b)->data < y && y > z && (*b)->data > z)
		ft_s(b, 'b');
}
