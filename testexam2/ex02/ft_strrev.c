#include <string.h>

int strleen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char    *ft_strrev(char *str)
{
	int i = 0;
	int len = strleen(str) - 1;
	char stock;

	while (len > i)
	{
		stock = str[i];
		str[i] = str[len];
		str[len] = stock;
		i++;
		len--;
	}
	return (str);
}

#include <stdio.h>

int main(int av, char **ag)
{
	if (av < 2)
	{
		return (0);
	}
	printf("retour de fonction(%s) = %s",ag[1], ft_strrev(ag[1]));
}