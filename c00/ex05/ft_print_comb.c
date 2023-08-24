/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacens <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:43:05 by aacens            #+#    #+#             */
/*   Updated: 2023/08/24 14:47:29 by aacens           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_writev2(char a, char b, char c)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &c, 1);
	if (a < '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_writev2(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
