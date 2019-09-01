/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 12:14:52 by jwere             #+#    #+#             */
/*   Updated: 2018/08/22 18:06:01 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int		next_max(t_ilist *list, int m)
{
	t_ilist *lst;
	int		new;

	lst = list;
	new = list->data;
	while (lst)
	{
		if (lst->data > new && lst->data != m)
			new = lst->data;
		lst = lst->next;
	}
	return (new);
}

static int		max_pos(t_ilist *lst, int m, int n)
{
	int i;

	i = 0;
	while (lst)
	{
		if (lst->data == m || lst->data == n)
			break ;
		lst = lst->next;
		i++;
	}
	return (i);
}

static void		finish(t_ilist **alst, t_ilist **b)
{
	if (!*b)
		return ;
	if ((*b)->next && (*b)->data > (*b)->next->data)
	{
		ft_s(b, 'b');
		ft_p(alst, b, 'a');
		if ((*alst)->data > (*alst)->next->data)
			ft_s(alst, 'a');
		ft_p(alst, b, 'a');
		if ((*alst)->data > (*alst)->next->data)
			ft_s(alst, 'a');
		return ;
	}
	ft_p(alst, b, 'a');
	if ((*alst)->data > (*alst)->next->data)
		ft_s(alst, 'a');
}

void			rev_sort(t_ilist **alst, t_ilist **b)
{
	int		m;
	int		pos;
	int		n;

	m = max_value(*b);
	n = next_max(*b, m);
	pos = min_pos(*b, m);
	while (ft_ilstsize(*b) > 1)
	{
		if ((*b)->data == m || (*b)->data == n)
		{
			ft_p(alst, b, 'a');
			m = max_value(*b);
			n = next_max(*b, m);
			if ((*alst)->data < m)
				n = m;
			if ((*alst)->data > (*alst)->next->data)
				ft_s(alst, 'a');
		}
		if (max_pos(*b, m, n) < (int)ft_ilstsize(*b) / 2)
			ft_r(b, 'b');
		else
			ft_revr(b, 'b');
	}
	finish(alst, b);
}
