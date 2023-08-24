#include <stdio.h>

int ft_putstr(char *str)
{
    int i;
    char c;

    i = 0;
    while (str[i])
    {
        c = str[i];
        write(1, &c, 1);
        i++;
    }
}