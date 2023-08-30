void    ft_putchar(char print, char *base)
{
    int i;

    i = print;
    write(1, &base[i], 1);
}

int        check_base(char *base)
{
    int i;
    int j;

    i = -1;
    while (base[++i])
    {
        j = -1;
        while (base[++j])
            if (base[i] == base[j] && i != j)
                return (1);
        if (base[i] == '+' || base[i] == '-' ||
        (base[i] <= 31) || base[i] == 127)
            return (1);
    }
    if (i < 2)
        return (1);
    return (0);
}

int        get_base(char *base)
{
    int i;

    i = 0;
    while (base[i] != '\0')
        i++;
    return (i);
}

void    ft_putnbr_base(int nbr, char *base)
{
    long long    n;
    long long    i;
    char        print;
    int            iv2;

    if (check_base(base))
        return ;
    i = get_base(base);
    n = nbr;
    len = i;
    if (n < 0)
    {
        n *= -1;
        write(1, "-", 1);
    }
    while (n >= i)
        i *= len;
    while (i >= len)
    {
        i /= len;
        print = (n - (n % i)) / i;
        ft_putchar(print, base);
        n = n % i;
    }
}