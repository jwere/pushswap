/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 11:57:13 by jwere             #+#    #+#             */
/*   Updated: 2018/06/11 14:55:41 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstjoin(t_list *current, t_list *coming)
{
	t_list *temp;

	if (!current && !coming)
		return (NULL);
	if (!current && coming)
	{
		current = coming;
		coming = NULL;
		return (current);
	}
	if (!coming && current)
		return (current);
	temp = current;
	while (temp->next)
		temp = temp->next;
	temp->next = coming;
	temp = NULL;
	coming = NULL;
	return (current);
}
