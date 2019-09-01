/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_case.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 10:39:32 by jwere             #+#    #+#             */
/*   Updated: 2018/08/23 15:16:28 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				check_str(char *str)
{
	if (!ft_strisnum(str))
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	if (is_overflow(str))
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	return (1);
}

static int		check_median(t_ilist *list, int m)
{
	t_ilist *lst;

	lst = list;
	while (lst)
	{
		if (lst->data <= m)
			return (1);
		lst = lst->next;
	}
	return (0);
}

void			ft_sort(t_ilist **alst, t_ilist **b, int q)
{
	int m;
	int	t;

	m = ft_median(*alst, 1, q);
	t = ft_median(*alst, 1, q * 2);
	while ((*alst)->next)
	{
		if (check_median(*alst, m) == 0)
		{
			q--;
			m = ft_median(*alst, 1, q);
			t = ft_median(*alst, 1, q * 2);
		}
		if (q == 1)
			break ;
		while ((*alst)->data > m)
			ft_r(alst, 'a');
		while ((*alst)->data <= m)
			ft_p(alst, b, 'b');
	}
}

static void		ft_sortbig(t_ilist **alst, t_ilist **b, int q)
{
	int m;
	int	t;

	m = ft_median(*alst, 1, q);
	t = ft_median(*alst, 1, q * 2);
	while ((*alst)->next)
	{
		if (check_median(*alst, m) == 0)
		{
			q--;
			m = ft_median(*alst, 1, q);
			t = ft_median(*alst, 1, q * 2);
		}
		if (q == 0)
			break ;
		while ((*alst)->data > m)
			ft_r(alst, 'a');
		if ((*alst)->data <= m && (*alst)->data >= t)
			ft_p(alst, b, 'b');
		else if ((*alst)->data <= m && (*alst)->data <= t)
		{
			ft_p(alst, b, 'b');
			ft_r(b, 'b');
		}
	}
}

void			push_swap(t_ilist **a, t_ilist **b)
{
	int i;
	int	len;

	len = ft_ilstsize(*a);
	i = 0;
	if (!*a || issorted(*a))
		return ;
	if (len <= 5)
		ft_five(a, b);
	else if (len <= 100)
	{
		ft_sort(a, b, 2);
		sort(a, b);
		rev_sort(a, b);
	}
	else if (len > 100)
	{
		ft_sortbig(a, b, 5);
		while ((*b)->next)
			ft_p(a, b, 'a');
		sort(a, b);
		rev_sort(a, b);
	}
}
