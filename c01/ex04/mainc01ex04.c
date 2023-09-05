#include <stdio.h>

int main() 
{
    int a = 42;
    int b = 9;

    printf("Avant l'opération : a = %d, b = %d\n", a, b);
    ft_ultimate_div_mod(&a, &b);
    printf("Après l'opération : a = %d, b = %d\n", a, b);

    return 0;
}