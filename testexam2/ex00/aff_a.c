#include <unistd.h>

int main(int av, char **ag)
{
	int i = 0;

	if (av == 2)
	{
		while (ag[1][i] != '\0')
		{
			if (ag[1][i] == 'a')
			{
				write(1, "a", 1);
				break;
			}
			i++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "a\n" ,1);
	return (0);
}