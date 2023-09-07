#include <unistd.h>

int main(int av, char **ag)
{
	(void)av;
	(void)ag;
	write(1, "z\n", 2);
	return (0);
}