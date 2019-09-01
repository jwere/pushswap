/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 16:16:15 by jwere             #+#    #+#             */
/*   Updated: 2018/08/24 12:05:55 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		ft_css(t_ilist **alst, t_ilist **b)
{
	ft_swap_node(alst);
	ft_swap_node(b);
}

static void		ft_crr(t_ilist **alst, t_ilist **b)
{
	ft_rotate(alst);
	ft_rotate(b);
}

static void		ft_crrr(t_ilist **alst, t_ilist **b)
{
	ft_rev_rotate(alst);
	ft_rev_rotate(b);
}

static void		ft_execute(t_ilist **alst, t_ilist **b, char *str)
{
	if (ft_strcmp(str, "sa") == 0)
		ft_swap_node(alst);
	else if (ft_strcmp(str, "sb") == 0)
		ft_swap_node(b);
	else if (ft_strcmp(str, "ss") == 0)
		ft_css(alst, b);
	else if (ft_strcmp(str, "pb") == 0)
		ft_push(alst, b);
	else if (ft_strcmp(str, "pa") == 0)
		ft_push(b, alst);
	else if (ft_strcmp(str, "ra") == 0)
		ft_rotate(alst);
	else if (ft_strcmp(str, "rb") == 0)
		ft_rotate(b);
	else if (ft_strcmp(str, "rra") == 0)
		ft_rev_rotate(alst);
	else if (ft_strcmp(str, "rrb") == 0)
		ft_rev_rotate(b);
	else if (ft_strcmp(str, "rr") == 0)
		ft_crr(alst, b);
	else if (ft_strcmp(str, "rrr") == 0)
		ft_crrr(alst, b);
}

int				ft_checker(t_ilist **alst, t_ilist **b)
{
	int		i;
	char	**av;

	i = 0;
	av = get_rule(i);
	if (ft_strcmp(av[0], "invalid") == 0)
		ok_ko(*alst, *b);
	else if (ft_strcmp(av[0], "Error") == 0)
		ft_putstr_fd("Error\n", 2);
	else
	{
		while (av[i])
			ft_execute(alst, b, av[i++]);
		ok_ko(*alst, *b);
	}
	delete_all(av, alst, b);
	return (0);
}
