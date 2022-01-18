/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:22:14 by magonzal          #+#    #+#             */
/*   Updated: 2021/12/09 16:22:17 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	while (nb != n && nb % n != 0)
	{
		if (n * n < 0)
			return (1);
		if (nb == 1)
			return (0);
		n++;
	}
	if (nb == n)
		return (1);
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	while (nb > 0)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		else
			nb++;
	}
}
