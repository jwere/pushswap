/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 12:20:51 by jwere             #+#    #+#             */
/*   Updated: 2018/08/22 14:01:12 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int		check_num(t_ilist *list, int m, int n, int p)
{
	t_ilist *lst;

	lst = list;
	while (lst)
	{
		if (lst->data == m || lst->data == n || lst->data == p)
			return (1);
		lst = lst->next;
	}
	return (0);
}

static int		next_min(t_ilist *list, int m)
{
	t_ilist *lst;
	int		new;

	lst = list;
	new = list->data;
	while (lst)
	{
		if (lst->data < new && lst->data != m)
			new = lst->data;
		lst = lst->next;
	}
	return (new);
}

static void		values(t_ilist **alst, int *m, int *n, int *p)
{
	*m = min_value(*alst);
	*n = next_min(*alst, *m);
	*p = next_min(*alst, *n);
}

static void		finish(t_ilist **alst, t_ilist **b, int even)
{
	ft_five(alst, b);
	while (--even >= 0)
	{
		if ((*alst)->data > (*alst)->next->data)
			ft_s(alst, 'a');
		ft_p(alst, b, 'a');
	}
}

void			sort(t_ilist **a, t_ilist **b)
{
	t_point	x;

	values(a, &x.m, &x.n, &x.p);
	x.even = 0;
	while (ft_ilstsize(*a) > 5)
	{
		if ((*a)->data == x.m || (*a)->data == x.n || (*a)->data == x.p)
		{
			ft_p(a, b, 'b');
			if ((*b)->data < (*b)->next->data)
				ft_s(b, 'b');
			x.even++;
			if (!check_num(*a, x.m, x.n, x.p))
			{
				sort_three(a, b);
				values(a, &x.m, &x.n, &x.p);
			}
		}
		if (pos(*a, x.m, x.n, x.p) <= (int)ft_ilstsize(*a) / 2)
			ft_r(a, 'a');
		else
			ft_revr(a, 'a');
	}
	finish(a, b, x.even);
}
