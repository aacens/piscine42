//#include <stdio.h>
//#include <stdlib.h>

int ft_iterative_power(int nb, int power)
{
    long current_number;
	long current_power;

    current_number = nb;
    if (power == 0)
		return (1);
	if (nb == 0 && power == 0)
		return (1);
    while (power > 1)
    {
        current_number *= nb;
        power--;
    }
    return(current_number);
}


/*int main(int ac, char **av)
{
    if (ac < 3)
    {
        printf("Usage: %s base exponent\n", av[0]);
        return 1;
    }
    
    int base = atoi(av[1]);
    int exponent = atoi(av[2]);
    
    int result = ft_iterative_power(base, exponent);
    
    printf("%d^%d = %d\n", base, exponent, result);
    
    return 0;
}*/
