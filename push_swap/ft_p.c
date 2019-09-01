/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 18:36:33 by jwere             #+#    #+#             */
/*   Updated: 2018/08/12 17:03:21 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_p(t_ilist **a, t_ilist **b, char stack)
{
	if (stack == 'a')
		ft_push(b, a);
	else
		ft_push(a, b);
	ft_putchar('p');
	ft_putchar(stack);
	ft_putchar('\n');
}
