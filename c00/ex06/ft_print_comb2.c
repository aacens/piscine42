/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacens <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:50:42 by aacens            #+#    #+#             */
/*   Updated: 2023/08/24 15:04:32 by aacens           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_writev2(char a, char b, char c, char d)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, " ", 1);
	write (1, &c, 1);
	write (1, &d, 1);
	if (!(a == '9' && b == '8' && c == '9' && d == '9'))
	{
		write (1, ", ", 2);
	}
}

void	ft_do_cd(char a, char b, char c, char d)
{
	while (c <= '9' && d <= '9') 
	{
		if (d == '9' && c < '9')
		{
			d = '0';
			c++;
		}
		ft_writev2(a, b, c, d);
		d++;
	}
}

void	ft_do(char a, char b, char c, char d)
{
	while (a <= '9' && b <= '9')
	{
		ft_do_cd(a, b, c, d);
		if (b == '9')
		{
			a++;
			b = '0';
			d = b + 1;
			c = a;
		}
		else
		{
			c = a;
			b++;
			d = b + 1;
		}
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	ft_do (a, b, c, d);
}
