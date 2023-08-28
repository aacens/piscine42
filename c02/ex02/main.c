#include <stdio.h>

int main(int av,char **ag)
{
    printf("le retour de ma fonction (%s) = %d\n", ag[1], ft_str_is_alpha(ag[1]));
    return 0;
}
