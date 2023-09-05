/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacens <aacens@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:55:54 by aacens            #+#    #+#             */
/*   Updated: 2023/09/04 18:56:05 by aacens           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_sqrt(int nb) 
{
    int i = 0;
    
    while (i * i <= nb) 
	{
        if (i * i == nb) 
            return i;
        i++;
    }
    
    return 0;
}

int main() {
    int nb;
    
    printf("Entrez un nombre : ");
    scanf("%d", &nb);
    
    int result = squareRoot(nb);
    
    if (result != 0)
        printf("La racine carrée entière de %d est : %d\n", nb, result);
	 else 
        printf("La racine carrée de %d n'est pas entière.\n", nb);
    
    return 0;
}