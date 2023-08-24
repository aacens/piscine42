#include <unistd.h>

void ft_is_negative(int n)
{
    char result;

    result = 'N';
    if(n <= -1)
    {
        write(1, &result, 1);
    }
    else
    {
        result = 'P';
        write(1, &result, 1);
    }
}