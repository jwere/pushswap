/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 18:39:50 by jwere             #+#    #+#             */
/*   Updated: 2018/08/24 12:15:10 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		finish(t_ilist **lst, t_ilist **b)
{
	if (issorted(*lst) && !*b)
	{
		ft_ilstdel(lst);
		return ;
	}
	push_swap(lst, b);
	ft_ilstdel(lst);
	ft_ilstdel(b);
}

int				main(int ac, char **av)
{
	t_ilist *lst;
	t_ilist	*b;

	if (ac >= 2)
	{
		if (ac > 2)
			if (!check_param(av + 1))
				return (0);
			else
				lst = ft_arr_tolist(av + 1);
		else
		{
			av = ft_strsplit(av[1], ' ');
			if (!check_param(av))
			{
				ft_arraydel(av);
				return (0);
			}
			lst = ft_arr_tolist(av);
			ft_arraydel(av);
		}
		finish(&lst, &b);
	}
	return (0);
}
