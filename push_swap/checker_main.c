/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 18:39:50 by jwere             #+#    #+#             */
/*   Updated: 2018/08/24 12:08:14 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char		**no_read(char *str)
{
	char **arr;

	if (!(arr = (char **)malloc(sizeof(char*) * 2)))
		return (NULL);
	arr[0] = ft_strdup(str);
	arr[1] = NULL;
	return (arr);
}

void		ok_ko(t_ilist *a, t_ilist *b)
{
	if (issorted(a) && !b)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

char		**get_rule(int i)
{
	char	*line;
	char	**arr;

	i = 0;
	arr = NULL;
	while (get_next_line(0, &line) == 1 && ++i)
	{
		if (!is_rule(line))
		{
			ft_strdel(&line);
			if (arr)
				ft_arraydel(arr);
			return (no_read("Error"));
		}
		else if (is_rule(line) && arr == NULL)
		{
			arr = no_read(line);
			ft_strdel(&line);
		}
		else if (is_rule(line) && arr != NULL)
			arr = ft_array_join(arr, line);
	}
	if (i == 0)
		return (no_read("invalid"));
	return (arr);
}

int			main(int ac, char **av)
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
		return (ft_checker(&lst, &b));
	}
	else
		return (0);
}
