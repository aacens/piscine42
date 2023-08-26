int main(int av,char **ac)
{
    int tab[av];
    int i = 0;
    while (i < av)
    {
        tab[i] = i;
        printf('avant %d \n', tab[i]);
        i++;
    }
    
    ft_rev_int_tab(tab, av);
    i = 0;
    while (i < av)
    {

        printf('apres %d \n', tab[i]);johm
    }
    
    
    
    return(0);
}