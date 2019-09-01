/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_tolist.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 17:21:21 by jwere             #+#    #+#             */
/*   Updated: 2018/08/23 16:02:22 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_node(t_ilist **list, char *str)
{
	t_ilist	*node;
	t_ilist *lst;

	lst = *list;
	if (!(node = (t_ilist *)malloc(sizeof(t_ilist))))
		return ;
	node->data = ft_atoi(str);
	node->next = NULL;
	while (lst->next)
		lst = lst->next;
	lst->next = node;
	node = NULL;
}

void	arr_tolist(t_ilist **list, char *str)
{
	char	**arr;
	int		i;

	i = 0;
	arr = ft_strsplit(str, ' ');
	if (!*list)
	{
		if (!(*list = (t_ilist *)malloc(sizeof(t_ilist))) || !arr)
			return ;
		(*list)->data = ft_atoi(arr[i++]);
		(*list)->next = NULL;
	}
	while (arr[i])
		add_node(list, arr[i++]);
	ft_arraydel(arr);
}

t_ilist	*ft_arr_tolist(char **arr)
{
	t_ilist	*list;
	int		i;

	i = 0;
	if (!(list = (t_ilist *)malloc(sizeof(t_ilist))) || !arr)
		return (NULL);
	list->data = ft_atoi(arr[i++]);
	list->next = NULL;
	while (arr[i])
	{
		if (ft_words(arr[i]) > 1)
			arr_tolist(&list, arr[i]);
		else
			add_node(&list, arr[i]);
		i++;
	}
	return (list);
}
