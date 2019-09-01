/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_r.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 18:35:00 by jwere             #+#    #+#             */
/*   Updated: 2018/08/15 16:59:50 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_r(t_ilist **alst, char stack)
{
	ft_rotate(alst);
	ft_putchar('r');
	ft_putchar(stack);
	ft_putchar('\n');
}