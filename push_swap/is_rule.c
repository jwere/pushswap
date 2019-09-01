/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_rule.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 14:33:27 by jwere             #+#    #+#             */
/*   Updated: 2018/08/24 12:08:09 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		is_rule(char *av)
{
	if (ft_strcmp(av, "sa") == 0 || ft_strcmp(av, "sb") == 0 ||
			ft_strcmp(av, "ss") == 0 || ft_strcmp(av, "pa") == 0 ||
			ft_strcmp(av, "pb") == 0 || ft_strcmp(av, "ra") == 0 ||
			ft_strcmp(av, "rb") == 0 || ft_strcmp(av, "rr") == 0 ||
			ft_strcmp(av, "rra") == 0 || ft_strcmp(av, "rrb") == 0 ||
			ft_strcmp(av, "rrr") == 0)
		return (1);
	return (0);
}
