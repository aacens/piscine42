int main(int av, char **ac)
{
    int i = 0;
    int nb[av - 1];
    while (i < av)
    {
        if (i > 0)
            nb[i - 1] = av - i;
        i++;
    }
i = 0;
    while (i < av - 1)
    {
       
        printf("avant i = %d  \n", nb[i]);
        i++;
    }
    printf("\n JE COMMANCE \n\n");
    ft_sort_int_tab(nb, av - 1);
    i = 0;
    while (i < av - 1)
    {
       
        printf("apres i = %d  \n", nb[i]);
        i++;
    }

    return 0;
}