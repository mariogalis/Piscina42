/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:37:31 by magonzal          #+#    #+#             */
/*   Updated: 2021/12/14 16:37:33 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*arr;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	size = max - min;
	arr = malloc(sizeof(int) * size);
	if (!arr)
		return (-1);
	i = 0;
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	i = 0;
	*range = arr;
	return (size);
}

/*
int	main(void)
{
	int max = 10;
	int min = 20;
	int *array = ft_ultimate_range(5,min,max);

for (int i = 0; i < range; i++)
	printf("%d  ", array[i]);

printf("\n");
	return 0;
}
*/
