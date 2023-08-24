/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacens <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:05:19 by aacens            #+#    #+#             */
/*   Updated: 2023/08/24 15:13:11 by aacens           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	print;
	long	checknb;
	char	c;

	if (nb < 0) 
	{
		write(1, "-", 1);
		nb = -nb;
	}
	checknb = 1;
	while (checknb * 10 <= nb)
	{
		checknb *= 10;
	}
	while (checknb > 0)
	{
		print = nb / checknb;
		nb = nb % checknb;
		c = print + '0';
		write (1, &c, 1);
		checknb /= 10;
	}
}
