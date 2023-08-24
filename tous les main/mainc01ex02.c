#include <stdio.h>

int main() 
{
    int a = 5;
    int b = 10;

    printf("Avant l'échange : a = %d, b = %d\n", a, b);
    ft_swap(&a, &b); // Appel à la fonction ft_swap pour échanger les valeurs de a et b
    printf("Après l'échange : a = %d, b = %d\n", a, b);

    return 0;
}