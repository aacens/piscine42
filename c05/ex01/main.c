int main(int av, char **ag)
{
    // https://fr.wikipedia.org/wiki/Factorielle
    if (av < 2)
        return 0;
    printf("le retour de fonction(%s) = %d\n", ag[1] , ft_recursive_factorial(atoi(ag[1])));
    printf("le retour de fonction(%d) (result doit etre 0)= %d\n", -1 , ft_recursive_factorial(-1));
    printf("le retour de fonction(%d) (result doit etre 1)= %d\n", 0 , ft_recursive_factorial(0));
    printf("le retour de fonction(%d) (result doit etre 1)= %d\n", 1 , ft_recursive_factorial(1));
    printf("le retour de fonction(%d) (result doit etre 2)= %d\n", 2 , ft_recursive_factorial(2));
    printf("le retour de fonction(%d) (result doit etre 6)= %d\n", 3 , ft_recursive_factorial(3));
    printf("le retour de fonction(%d) (result doit etre 24)= %d\n", 4 , ft_recursive_factorial(4));
    printf("le retour de fonction(%d) (result doit etre 120)= %d\n", 5 , ft_recursive_factorial(5));
    return 0;
}
