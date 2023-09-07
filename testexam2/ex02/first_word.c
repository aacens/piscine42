#include <unistd.h>

int main(int av, char **ag)
{
	int i = 0;
	if (av == 2)
	{
		while (ag[1][i] == '\t' || ag[1][i] == ' ')
		{
			i++;
		}
		while (ag[1][i] != '\0' && ag[1][i] != ' ' && ag[1][i] != '\t')
		{
			write(1, &ag[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}