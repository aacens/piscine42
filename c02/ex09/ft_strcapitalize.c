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

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	premier;

	i = 0;
	premier = 1;
	while (str[i] != '\0')
	{
		if ((str[i] > 64 && str[i] < 91) && premier == 0)
		{
			str[i] += 32;
		}
		if ((str[i] > 96 && str[i] < 123) && premier == 1)
		{
			str[i] -= 32;
		}
		premier = 0;
		if (!((str[i] > 47 && str[i] < 58) || (str[i] > 64 && str[i] < 91) ||
		(str[i] > 96 && str[i] < 123)))
		{
			premier = 1;
		}
		i++;
	}
	return (str);
}

int main(int av, char **ag)
{
	if (av < 2)
		return 0;
	printf("avant = %s'\n", ag[1]);
	printf("apres = %s", ft_strcapitalize(ag[1]));
	return 0;
}