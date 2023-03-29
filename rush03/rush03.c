/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbenti-r <cbenti-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 12:05:41 by cbenti-r          #+#    #+#             */
/*   Updated: 2023/02/05 13:34:08 by cbenti-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char letter);
void	full(int x);
void	middle(int x);

void	rush(int x, int y)
{
	int	j;

	j = 1;
	if (x > 0 && y > 0)
	{
		while (j <= y)
		{
			if (j == 1 || j == y)
			{	
				full(x);
			}
			else
			{
				middle(x);
			}
		j++;
		}
	}
}

void	full(int x)
{
	char	i;
	char	letter;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			letter = 'A';
			ft_putchar(letter);
		}
		else if (i == x)
		{
			letter = 'C';
			ft_putchar(letter);
		}
		else
		{
			letter = 'B';
			ft_putchar(letter);
		}
		i++;
	}
	ft_putchar('\n');
}

void	middle(int x)
{
	char	i;
	char	letter;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			letter = 'B';
			ft_putchar(letter);
		}
		else if (i == x)
		{
			letter = 'B';
			ft_putchar(letter);
		}
		else
		{
			letter = ' ';
			ft_putchar(letter);
		}
	i++;
	}
	ft_putchar('\n');
}
