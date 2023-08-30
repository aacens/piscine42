int	ft_putstr(char	*str)
{
	int		v;

	v = 0;
	while (str[v])
	{
		write(1, &v, 1);
		v++;
	}
}