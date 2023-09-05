/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacens <aacens@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 09:38:00 by aacens            #+#    #+#             */
/*   Updated: 2023/09/04 17:34:44 by aacens           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	check_base(char *base)
{
	int	i;
	int	j;

	i = -1;
	while (base[++i])
	{
		j = -1;
		while (base[++j])
			if (base[i] == base[j] && i != j)
				return (1);
		if (base[i] == '+' || base[i] == '-' 
			|| (base[i] <= 31) || base[i] == 127)
		{
			return (1);
		}
	}
	if (i < 2)
		return (1);
	return (0);
}

int	get_base(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

void	ft_putchar(char print)
{
	write(1, &print, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long	n;
	int			len;
	char		print;

	if (check_base(base))
		return ;
	len = get_base(base);
	n = nbr;
	if (n < 0)
	{
		n *= -1;
		write(1, "-", 1);
	}
	if (n >= len)
		ft_putnbr_base(n / len, base);
	print = base[n % len];
	ft_putchar(print);
}

/*int main(void)
{
    int nbr = 255;
    char base[] = "0123456789ABCDEF";
    
    ft_putnbr_base(nbr, base);
    ft_putchar('\n');
    
    return 0;
}*/