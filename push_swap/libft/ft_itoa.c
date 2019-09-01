/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 11:24:33 by jwere             #+#    #+#             */
/*   Updated: 2018/06/13 09:59:38 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	int		i;
	char	*str;
	int		nbr;

	nbr = n;
	if (n == -2147483648)
		nbr = -2147483647;
	i = ft_nbrlen(nbr);
	if (nbr < 0)
		nbr = -nbr;
	if (!(str = ft_strnew(i)))
		return (0);
	while (i-- >= 0)
	{
		str[i] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	if (n < 0)
		str[0] = '-';
	if (n == -2147483648)
		str[10] = 8 + '0';
	return (str);
}
