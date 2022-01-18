/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_range.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:51:11 by magonzal          #+#    #+#             */
/*   Updated: 2021/12/14 15:51:13 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		array[i] = min;
		i++;
		min ++;
	}
	return (array);
}

/*
int main()
{
	int *arr = ft_range(21,20);
    
    if (arr == NULL)
        printf("its null");
	
	if(arr)
	{
		for(int i =0; i < 10; i++)
		{
			printf("%d ", arr[i]);
		}
	}
	return 0;
}
*/
