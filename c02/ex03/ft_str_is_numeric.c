// #include <stdio.h>

// int ft_str_is_numeric(char *str)
// {
//     int i;

//     i = 0;
//     while (str[i] != '\0')
//     {
//         if (!(str[i] >= '0' && str[i] <= '9'))
//             return(0);
//         i++;
//     }
//     return (1);
// }

int ft_str_is_numeric(char *str)
{
    if (str[0] == '\0')
        return (1);
    if (!(str[0] >= '0' && str[0] <= '9'))
        return(0);
    return (ft_str_is_numeric(&str[1]));
}