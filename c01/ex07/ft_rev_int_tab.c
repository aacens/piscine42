#include <unistd.h>

void ft_rev_int_tab(int *tab, int size) 
{
    int start; 
    int end;
    int stockend;

    start = 0;
    end = size - 1;

    while (start < end) 
    {
        stockend = tab[start];
        tab[start] = tab[end];
        tab[end] = stockend;
        start++;
        end--;
    }
}