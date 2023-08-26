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

void	ft_putnbr(int	 nb)
{
	long	print;
	long	checknb;
	char	c;
	long	nbEnLong;

	nbEnLong = nb;
	if (nbEnLong < 0)
	{
		write(1, "-", 1);
		nbEnLong = -nbEnLong;
	}
	checknb = 1;
	while (checknb * 10 <= nbEnLong)
	{
		checknb *= 10;
	}
	while (checknb > 0)
	{
		print = nbEnLong / checknb;
		nbEnLong = nbEnLong % checknb;
		c = print + '0';
		write (1, &c, 1);
		checknb /= 10;
	}
}

int main()
{
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(2147483647);
	printf("\n");
	ft_putnbr(-1);
	printf("\n");
	ft_putnbr(1);
	printf("\n");
	ft_putnbr(0);
	printf("\n");
	ft_putnbr(-42);
	printf("\n");
	ft_putnbr(42);
	printf("\n");
}