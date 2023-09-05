/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacens <aacens@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 09:47:04 by aacens            #+#    #+#             */
/*   Updated: 2023/09/04 18:31:20 by aacens           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char tp)
{
	if (tp != 0)
		write(1, &tp, 1);
	else
		write(1, "0", 1);
}

void	ft_putnbr(int nb)
{
	long long	n;
	long long	i;
	long long	reste;
	int			print;
	char		tp;

	n = nb;
	i = 10;
	if (n < 0)
	{
		n *= -1;
		write(1, "-", 1);
	}
	while (n >= i)
		i *= 10;
	while (i >= 10)
	{
		i /= 10;
		reste = n % i;
		print = (n - reste) / i;
		tp = print + 48;
		ft_print(tp);
		n = reste;
	}
}
