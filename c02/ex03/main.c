int main(int av, char **ag)
{
    if (av < 2)
        return 0;
    printf("le retour de fonction(%s) = %d", ag[1] , ft_str_is_numeric(ag[1]));
    return 0;
}
