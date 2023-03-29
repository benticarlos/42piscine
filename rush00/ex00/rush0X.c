void	ft_putchar(char c);

int		x_lines(int i, int x)
{
	while (i <= x)
	{
		if (x == 1)
		{
			ft_putchar('o');
			ft_putchar('\n');
		}
		else if (i == 1)
			ft_putchar('o');
		else if (i == x)
		{
			ft_putchar('o');
			ft_putchar('\n');
		}
		else
			ft_putchar('-');
		i++;
	}
	return (0);
}

int		y_lines(int j, int x)
{
	while (j <= x)
	{
		if (x == 1 || j == x)
		{
			ft_putchar('|');
			ft_putchar('\n');
		}
		else if (j == 1)
			ft_putchar('|');
		else
			ft_putchar(' ');
		j++;
	}
	return (0);
}

int		rush(int x, int y)
{
	int i;
	int j;
	int tmp;

	i = 1;
	j = 1;
	tmp = y;
	x_lines(i, x);
	while (y > 2)
	{
		y_lines(j, x);
		y--;
		j = 1;
	}
	if (tmp > 1)
		x_lines(i, x);
	return (0);
}