/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacens <aacens@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 09:47:19 by aacens            #+#    #+#             */
/*   Updated: 2023/09/04 14:28:32 by aacens           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
{
	int		i;
	int		signe;
	long	stock;

	stock = 0;
	signe = 1;
	i = 0;
	while ((str[i] <= 9 && str[i] >= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		stock = stock * 10 + str[i] - '0';
		i++;
	}
	return (stock * signe);
}

/*int main(int av, char **ag)
{
	printf("avant atoi = %s", ag[1]);
	printf("\n");
	printf("\n");
	printf("apres atoi = %d", ft_atoi(ag[1]));
}*/