/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 17:41:59 by jwere             #+#    #+#             */
/*   Updated: 2018/06/12 16:45:40 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putnbr_fd(int n, int fd)
{
	int		i;
	int		len;
	char	r;

	i = 0;
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = -n;
		}
		len = ft_nbrlen(n) - 1;
		while (len >= 0)
		{
			r = ((n / ft_power(10, (int)len)) + '0');
			ft_putchar_fd(r, fd);
			n = n % ft_power(10, (int)len);
			len--;
		}
	}
}
