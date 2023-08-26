#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int current_nb;

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