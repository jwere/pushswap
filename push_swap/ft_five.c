/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_five.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 12:05:24 by jwere             #+#    #+#             */
/*   Updated: 2018/08/22 12:07:44 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		ft_three(t_ilist **alst)
{
	int c;
	int n;
	int nn;

	if (!*alst || issorted(*alst))
		return ;
	c = (*alst)->data;
	n = (*alst)->next->data;
	nn = (*alst)->next->next->data;
	if (c > n && c > nn && n < nn)
		ft_r(alst, 'a');
	else if (c > n && c > nn && n > nn)
	{
		ft_s(alst, 'a');
		ft_revr(alst, 'a');
	}
	else if (c < n && c > nn)
		ft_revr(alst, 'a');
	else if (n < c && n < nn)
		ft_s(alst, 'a');
	else if (c < n && c < nn)
	{
		ft_s(alst, 'a');
		ft_r(alst, 'a');
	}
}

static void		ft_four(t_ilist **alst, t_ilist **b)
{
	int	min;
	int pos;

	if (!*alst || issorted(*alst))
		return ;
	min = min_value(*alst);
	pos = min_pos(*alst, min);
	if (pos <= (int)ft_ilstsize(*alst) / 2)
		while ((*alst)->data != min)
			ft_r(alst, 'a');
	else
		while ((*alst)->data != min)
			ft_revr(alst, 'a');
	ft_p(alst, b, 'b');
	ft_three(alst);
	ft_p(alst, b, 'a');
}

void			ft_five(t_ilist **alst, t_ilist **b)
{
	int	min;
	int pos;

	if (!*alst || issorted(*alst))
		return ;
	if (ft_ilstsize(*alst) == 2)
		ft_s(alst, 'a');
	else if (ft_ilstsize(*alst) == 3)
		ft_three(alst);
	else if (ft_ilstsize(*alst) == 4)
		ft_four(alst, b);
	else
	{
		min = min_value(*alst);
		pos = min_pos(*alst, min);
		if (pos <= (int)ft_ilstsize(*alst) / 2)
			while ((*alst)->data != min)
				ft_r(alst, 'a');
		else
			while ((*alst)->data != min)
				ft_revr(alst, 'a');
		ft_p(alst, b, 'b');
		ft_four(alst, b);
		ft_p(alst, b, 'a');
	}
}
