#include <stdio.h>

int ft_strlen(char *str)
{
    int v;

    v = 0;
    while (str[v])
    {
        v++;
    }
    return(v);
}