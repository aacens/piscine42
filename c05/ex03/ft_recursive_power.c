#include <stdio.h>
#include <stdlib.h>

int ft_recursive_power(int nb, int power)
{
	if (power == 0)
	{
		return (1);
	}
	if (power <= 1)
		return (nb);
	if (power == 0 && nb == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}	

int main(int ac, char **av)
{
    if (ac < 3)
    {
        printf("Usage: %s base exponent\n", av[0]);
        return 1;
    }
    
    int base = atoi(av[1]);
    int exponent = atoi(av[2]);
    
    int result = ft_recursive_power(base, exponent);
    
    printf("%d^%d = %d\n", base, exponent, result);
    
    return 0;
}