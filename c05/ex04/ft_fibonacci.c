#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int ft_fibonacci(int index)
{
    if (index < 0)
    {
        return -1;
    }
    if (index == 0)
    {
        return 0;
    }
    if (index == 1)
    {
        return 1;
    }
    return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("Usage: %s <index>\n", argv[0]);
        return 1;
    }

    int index = atoi(argv[1]);
    int result = ft_fibonacci(index);

    printf("Fibonacci(%d) = %d\n", index, result);

    return 0;
}