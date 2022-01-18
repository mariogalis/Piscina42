/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:51:49 by magonzal          #+#    #+#             */
/*   Updated: 2021/12/14 15:51:56 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	nb;
	{
		nb = 0;
		while (*str != '\0')
		{
			str++;
			nb++;
		}
		return (nb);
	}
}

int	ft_contador(char *str)
{
	int	a;

	a = 0;
	while (*str != '\0')
	{
		str++;
		a++;
	}
	return (a);
}

char	*ft_strcat(char *dest, char *src)
{
	int	b;

	b = ft_contador(dest);
	while (*src != '\0')
	{
		dest[b] = *src;
		src++;
		b++;
	}
	dest[b] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		size2;
	int		i;
	char	*final;

	i = 0;
	size2 = 0;
	while (i < size)
	{
		size2 += ft_strlen(strs[i]) + ft_strlen(sep);
		i++;
	}
	if (size != 0)
		size2 -= ft_strlen(sep);
	final = malloc(sizeof(char) * (size2 + 1));
	*final = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(final, strs[i]);
		if (i != size - 1)
			ft_strcat(final, sep);
		i++;
	}
	final[size2] = 0;
	return (final);
}

/*
int	main(void)
{
	int		size;
	char	*strs[] = {"Hola", "gracias", "por", "corregirme"};
	char *sep="//";
	size = 4;
	int i;
	char *a;
	i = 0;
	a = ft_strjoin(size, strs, sep);
	while (a[i] != 0)
	{
		write(1, (a + i), 1);
		i++;
	}
}
*/
