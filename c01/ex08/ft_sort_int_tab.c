#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}


void ft_sort_int_tab(int *tab, int size)
{
    int v; 
    int reste;
    int mini;

    v = 0;
    while (v < size - 1) 
    {
        mini = v;
        reste = v + 1;
        while (reste < size) 
        {
            if (tab[reste] < tab[mini]) 
            {
                mini = reste;
            }
            reste++;
        }
        if (mini != v) 
        {
            swap(&tab[v], &tab[mini]);
        }
        v++;
    }
}