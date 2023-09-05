#include <stdio.h>

int ft_is_prime(int nb)
{
    if (nb <= 1)
        return (0);
    int divisor = 2;
    while (divisor * divisor <= nb)
    {
        if (nb % divisor == 0)
            return (0);
        divisor++;
    }
    return (1);
}

int ft_find_next_prime(int nb)
{
    if (nb <= 3)
        return 4;
    nb++;
    while (!ft_is_prime(nb))
    {
        nb++;
    }
    return nb;
}


int main(void)
{
    int number = 2;
    int next_prime = ft_find_next_prime(number);

    printf("Next prime after %d: %d\n", number, next_prime);

    return 0;
}