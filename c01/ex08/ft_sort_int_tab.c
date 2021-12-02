/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:30:29 by magonzal          #+#    #+#             */
/*   Updated: 2021/11/29 18:30:33 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	aux;

	i = -1;
	j = 0;
	while (i < size -1)
	{
		while (j < size - 1)
		{
			if (tab[j] > tab [j +1])
			{
				aux = tab[j+1];
				tab[j+1] = tab[j];
				tab[j] = aux;
				j = i;
			}
			j++;
		}
		i++;
	}
}
