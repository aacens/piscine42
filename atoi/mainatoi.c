#include <stdio.h>

int main(void)
{
    char input[] = "   ---+--+1234ab567";
    int result = ft_atoi(input);
    
    printf("Converted value: %d\n", result);

    return 0;
}