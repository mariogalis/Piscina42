/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:21:40 by magonzal          #+#    #+#             */
/*   Updated: 2021/12/09 16:21:43 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	flag;
	int	i;

	i = 2;
	flag = 0;
	if (nb < 0)
		return (0);
	while (i <= nb / 2 && i * i > 0)
	{
		if (nb % i == 0)
		{
			flag = 1;
			break ;
		}
		i++;
	}
	if (nb == 1 || nb == 0)
		return (0);
	else
	{
		if (flag == 0)
			return (1);
		else
			return (0);
	}
}
