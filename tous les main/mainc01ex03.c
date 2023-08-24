#include <stdio.h>

int main() 
{
    int a = 44;
    int b = 7;
    int div_result, mod_result;

    ft_div_mod(a, b, &div_result, &mod_result);

    printf("Divison result: %d\n", div_result);
    printf("Modulo result: %d\n", mod_result);

    return 0;
}