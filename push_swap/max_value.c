/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_value.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 12:13:52 by jwere             #+#    #+#             */
/*   Updated: 2018/08/22 16:58:18 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		max_value(t_ilist *lst)
{
	int		max;
	t_ilist	*temp;

	temp = lst;
	max = temp->data;
	while (temp)
	{
		if (temp->data > max)
			max = temp->data;
		temp = temp->next;
	}
	return (max);
}
