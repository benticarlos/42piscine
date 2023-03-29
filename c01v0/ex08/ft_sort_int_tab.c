/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbenti-r <cbenti-r@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:15:24 by cbenti-r          #+#    #+#             */
/*   Updated: 2023/02/09 17:05:20 by cbenti-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sort_int_tab(int *tab, int size)
{	
	int	index_i;
	int	index_j;
	int	pivot;

	index_i = 0;
	index_j = 0;
	while (index_j < size)
	{
		index_i = index_j++;
		while (index_i < size)
		{
			if (tab[index_j] > tab[index_j + 1])
			{
				pivot = tab[index_i];
				tab[index_i] = tab[index_i + 1];
				tab[index_i + 1] = pivot;
			}
			index_i++;
		}
		index_j++;
	}
}
