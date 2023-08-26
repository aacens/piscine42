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
#include <stdbool.h>

bool	ft_isfinished(int nb)
{	
	bool is_finished;

	is_finished = false;
		if (nb == -2147483648)
		{
			write (1, "-2147483648", 11);
			is_finished = true;
		}
	return(is_finished);
}

void	ft_putnbr(int	 nb)
{
	long	print;
	long	checknb;
	char	c;
	bool	is_finished;

	is_finished = ft_isfinished(nb);
	if (nb < 0 && is_finished == false) 
	{
		write(1, "-", 1);
		nb = -nb;
	}
	checknb = 1;
	while (checknb * 10 <= nb && is_finished == false)
	{
		checknb *= 10;
	}
	while (checknb > 0  && is_finished == false)
	{
		print = nb / checknb;
		nb = nb % checknb;
		c = print + '0';
		write (1, &c, 1);
		checknb /= 10;
	}
}

int main()
{
	ft_putnbr(-2147483648);
}