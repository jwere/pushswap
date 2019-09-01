/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilstdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 18:41:17 by jwere             #+#    #+#             */
/*   Updated: 2018/08/22 15:44:10 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ilstdel(t_ilist **lst)
{
	t_ilist *temp;

	while (*lst)
	{
		temp = *lst;
		*lst = temp->next;
		free(temp);
	}
}

void	delete_all(char **arr, t_ilist **alst, t_ilist **b)
{
	ft_ilstdel(alst);
	ft_ilstdel(b);
	ft_arraydel(arr);
}
