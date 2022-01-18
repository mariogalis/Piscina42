/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:50:22 by magonzal          #+#    #+#             */
/*   Updated: 2021/12/14 15:50:27 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	a;

	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

int	ft_strsize(char *str)
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

char	*ft_strdup(char *src)
{
	char	*array;
	int		size;

	size = ft_strsize(src);
	array = malloc(sizeof(char) * size);
	array = ft_strcpy(array, src);
	return (array);
}

/*
int	main(void)
{
	char	suya[] = "hola";
	char	nuestra[] = "hola";


	printf("suya : %s \n", strdup(suya));
	printf("nuestra : %s \n", ft_strdup(nuestra));
	return 0;
}
*/