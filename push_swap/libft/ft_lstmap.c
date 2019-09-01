/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 07:36:13 by jwere             #+#    #+#             */
/*   Updated: 2018/06/12 15:44:36 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *temp;
	t_list *new;
	t_list *result;

	if (!lst || !f)
		return (0);
	temp = f(lst);
	if (!(new = ft_lstnew(temp->content, temp->content_size)))
		return (0);
	result = new;
	lst = lst->next;
	while (lst != NULL)
	{
		temp = f(lst);
		if (!(new->next = ft_lstnew(temp->content, temp->content_size)))
			return (0);
		new = new->next;
		lst = lst->next;
	}
	return (result);
}
