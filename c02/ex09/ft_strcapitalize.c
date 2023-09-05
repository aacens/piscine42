/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacens <aacens@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 09:00:53 by aacens            #+#    #+#             */
/*   Updated: 2023/09/04 13:39:24 by aacens           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdbool.h>

bool	is_alphanumeric(char c)
{
	return ((c >= 'a' && c <= 'z') || 
		(c >= 'A' && c <= 'Z') || 
		(c >= '0' && c <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	bool	is_first_char;

	is_first_char = true;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_alphanumeric(str[i]))
		{
			if (is_first_char)
			{
				if (str[i] >= 'a' && str[i] <= 'z') 
					str[i] -= 32;
				is_first_char = false;
			}
			else 
				if (str[i] >= 'A' && str[i] <= 'Z') 
					str[i] += 32;
		}
		else 
			is_first_char = true;
		i++;
	}
	return (str);
}

/*int main(int av, char **ag)
{
	if (av < 2)
		return 0;
	printf("avant = %s'\n", ag[1]);
	printf("apres = %s", ft_strcapitalize(ag[1]));
	return 0;
}*/