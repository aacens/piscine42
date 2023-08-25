#include <stdio.h>

int ft_atoi(char *str)
{
    int v = 0;
    int signe = 1;
    int a = 0;

    while(str[v] >= 9 && str[v] <= 13 || str[v] == ' ')
    {
        v++;
    }
    while(str[v] == '+' || str[v] == '-')
    {
        if (str[v] == '-')
        {
            signe *= -1;
        }
        v++;
    }
    while (str[v] >= '0' && str[v] <= '9')
    {
        a = a * 10 + str[v] - '0';
        v++;    
    }
    return(a * signe);
}
