#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int ft_is_prime(int nb)
{
    int divisor;
	 
	divisor = 2;
    if (nb <= 1)
        return (0);
    while (divisor * divisor <= nb)
    {
        if (nb % divisor == 0)
            return (0);
        divisor++;
    }
    return (1);
}

int main() 
{
    int nb;
    
    printf("Entrez un nombre : ");
    scanf("%d", &nb);
    
    int result = ft_is_prime(nb);
    
    if (result != 0)
        printf("le nombre (%d) est un nombre premier:\n", nb);
	 else 
        printf("le nombre (%d) n'est un nombre premier.\n", nb);
    
    return 0;
}