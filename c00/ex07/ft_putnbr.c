/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacens <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:05:19 by aacens            #+#    #+#             */
/*   Updated: 2023/08/27 14:21:19 by aacens           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	print;
	long	checknb;
	char	c;
	long	nb_en_long;

	nb_en_long = nb;
	if (nb_en_long < 0)
	{
		write(1, "-", 1);
		nb_en_long = -nb_en_long;
	}
	checknb = 1;
	while (checknb * 10 < nb_en_long)
	{
		checknb *= 10;
	}
	while (checknb > 0)
	{
		print = nb_en_long / checknb;
		nb_en_long = nb_en_long % checknb;
		c = print + '0';
		write (1, &c, 1);
		checknb /= 10;
	}
}

/*
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
	printf("\n")
	ft_putnbr("1010010")
	printf("\n");
	ft_putnbr(-42);
	printf("\n");
	ft_putnbr(42);
	printf("\n");
}*/
