/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/10 10:54:48 by jwere             #+#    #+#             */
/*   Updated: 2018/06/13 13:29:43 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_insert_node(t_list **head, t_list *node, int pos)
{
	t_list	*prev;
	t_list	*next;
	int		n;

	n = -1;
	if (!node || pos < 0)
		return (-1);
	if (!head)
	{
		*head = node;
		return (1);
	}
	prev = *head;
	next = *head;
	while (++n < pos - 1)
		prev = prev->next;
	next = prev->next;
	if (n == pos - 1)
	{
		prev->next = node;
		node->next = next;
		return (1);
	}
	ft_lstadd_end(head, node);
	return (0);
}
