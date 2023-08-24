#include <unistd.h>

void ft_putnbr(int nb)
{
    long print;
    long checknb;

    if (nb < 0) 
        {
            write(1, "-", 1);
            nb = -nb;
        }
    checknb = 1;
    while (checknb * 10 <= nb)
    {
        checknb *= 10;
    }
    while (checknb > 0)
    {
        print = nb / checknb;
        nb = nb % checknb;

        char c = print + '0';
        write(1, &c, 1);

        checknb /= 10;
    }
}
