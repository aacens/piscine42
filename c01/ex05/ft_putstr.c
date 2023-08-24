#include <stdio.h>

int ft_putstr(char *str)
{
    int v;
    char c;

    v = 0;
    while (str[v])
    {
        c = str[v];
        write(1, &c, 1);
        v++;
    }
}