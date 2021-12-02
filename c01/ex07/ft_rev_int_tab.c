/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:33:23 by magonzal          #+#    #+#             */
/*   Updated: 2021/11/29 18:33:27 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	min;
	int	aux;
	int	max;

	min = 0;
	max = size - 1;
	while (min < max && max != 0)
	{
		aux = tab[min];
		tab[min] = tab[max];
		tab[max] = aux;
		min++;
	max--;
	}
}

