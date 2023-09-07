#include <unistd.h>
char *ft_rev_print (char *str)
{
	int i = 0;
	char c;

	while (str[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		c = str[i];
		write(1, &c, 1);
		i--;
	}
	return (str);
}

int main()
{
	char str[] = "aswsduyfaf";
	ft_rev_print(str);
}