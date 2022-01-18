/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:35:38 by magonzal          #+#    #+#             */
/*   Updated: 2021/11/30 15:35:46 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	print(int i, int j, int k, int l)
{
	if (l >= i && i <= k && j != l)
	{
		write(1, &i, 1);
		write(1, &j, 1);
		write(1, " ", 1);
		write(1, &k, 1);
		write(1, &l, 1);
		if (i != '9' || j != '8' || k != '9' || l != '9')
			write(1, ", ", 2);
	}
	l++;
	return (l);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = '0';
	while (i <= '9')
	{
		j = '0' ;
		while (j <= '8')
		{
			k = '0';
			while (k <= '9')
			{
				l = '1';
				while (l <= '9')
				{
					l = print(i, j, k, l);
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
