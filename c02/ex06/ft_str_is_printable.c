/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacens <aacens@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 09:00:53 by aacens            #+#    #+#             */
/*   Updated: 2023/09/04 12:23:52 by aacens           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (((str[i] >= 0 && str[i] <= 31) || (str[i] == 127)))
			return (0);
		i++;
	}
	return (1);
}

/*int main(int av, char **ag)
{
	if (av < 2)
		return 0;
	printf("le retour de fonction(%s) = %d", ag[1] , ft_str_is_alpha(ag[1]));
	return 0;
}*/