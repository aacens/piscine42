/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacens <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 09:00:53 by aacens            #+#    #+#             */
/*   Updated: 2023/08/28 09:01:40 by aacens           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	start; 
	int	end;
	int	stockend;

	start = 0;
	end = size - 1;
	while (start < end) 
	{
		stockend = tab[start];
		tab[start] = tab[end];
		tab[end] = stockend;
		start++;
		end--;
	}
}
