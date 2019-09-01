/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_median.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 10:36:52 by jwere             #+#    #+#             */
/*   Updated: 2018/08/22 16:27:16 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int		*ft_tab(t_ilist *lst)
{
	int		i;
	t_ilist *temp;
	int		*tab;

	i = 0;
	temp = lst;
	tab = (int *)malloc(sizeof(int) * (ft_ilstsize(temp) + 1));
	temp = lst;
	while (temp)
	{
		tab[i++] = temp->data;
		temp = temp->next;
	}
	return (tab);
}

static int		ft_mid(t_ilist *list, int *tab, int num, int den)
{
	int	i;

	i = 0;
	while (i < ((int)ft_ilstsize(list) * num / den) - 1)
		i++;
	i = tab[i];
	free(tab);
	return (i);
}

int				ft_median(t_ilist *list, int num, int den)
{
	int	i;
	int	*tab;
	int	j;

	tab = ft_tab(list);
	i = 0;
	while (i < (int)ft_ilstsize(list) - 1)
	{
		if (tab[i] < tab[i + 1])
			while (tab[i] < tab[i + 1])
				i++;
		else
		{
			j = 0;
			while (tab[i + j] > tab[i + j + 1] && \
					i + j < (int)ft_ilstsize(list) - 1)
			{
				ft_swap(&tab[i + j], &tab[i + j + 1]);
				j++;
			}
			i = 0;
		}
	}
	return (ft_mid(list, tab, num, den));
}
