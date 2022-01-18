/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 21:04:03 by magonzal          #+#    #+#             */
/*   Updated: 2021/11/29 21:04:07 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	power(int base, int exponente)
{
	if (exponente != 0)
		return (base * power(base, exponente - 1));
	else
		return (1);
}

int	length(int num)
{
	int	count;

	count = 0;
	while (num >= 10)
	{
		num = num / 10;
		count ++;
	}
	return (count);
}

void	ft_putnbr(int nb)
{
	int	a;
	int	b;
	int	c;
	int	lennb;
	int	lenc;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		nb = check(nb);
		a = power(10, length(nb));
		b = nb / a + '0';
		c = nb;
		nb = nb % a;
		lenc = length(c);
		lennb = length(nb);
		ft_aux(lenc, lennb, b);
		if (a != 1)
			ft_putnbr(nb);
	}
}

int	check(int nb)
{
	if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	return (nb);
}

void	ft_aux(int lenc, int lennb, int b)
{
	if ((lenc != lennb - 1 && lennb != 0) || lenc != 0)
	{
		write(1, &b, 1);
		while (lennb != lenc - 1)
		{
			write(1, "0", 1);
			lennb++;
		}
	}
	else
	{
		write(1, &b, 1);
	}
}
