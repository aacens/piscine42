#include <stdio.h>

void ft_iterative_factorial(int nb)
{
    long current_nb;

    current_nb = 1;
    if (nb < 0)
		return (0);
    while (nb > 0)
    {
        current_nb *= nb;
        nb--;
    }
    return(current_nb);
}