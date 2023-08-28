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

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	v; 
	int	reste;
	int	mini;

	v = 0;
	while (v < size - 1) 
	{
		mini = v;
		reste = v + 1;
		while (reste < size) 
		{
			if (tab[reste] < tab[mini]) 
			{
				mini = reste;
			}
			reste++;
		}
		if (mini != v) 
		{
			swap(&tab[v], &tab[mini]);
		}
		v++;
	}
}
