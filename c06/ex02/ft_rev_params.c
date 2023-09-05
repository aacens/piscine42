/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacens <aacens@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:47:37 by aacens            #+#    #+#             */
/*   Updated: 2023/09/04 13:47:37 by aacens           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_programs(char *str)
{
	int i;
  
	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
 
int	main(int av, char **ag) 
{ 
	int i;
  
	i = ac - 1;
	while (i != 0)
	{
		ft_print_programs(ag[i]);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
