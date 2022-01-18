/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 19:41:26 by magonzal          #+#    #+#             */
/*   Updated: 2021/12/16 19:41:28 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str)
	{
		length++;
		str++;
	}
	return (length);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*s_to_tb;
	int			index;
	int			cp_str;

	s_to_tb = malloc(sizeof(struct s_stock_str) * (ac + 1));
	index = 0;
	while (ac > 0)
	{
		s_to_tb[index].size = ft_strlen(av[index]);
		s_to_tb[index].copy = malloc(sizeof(char) * (s_to_tb[index].size + 1));
		cp_str = 0;
		while (av[index][cp_str])
		{
			s_to_tb[index].copy[cp_str] = av[index][cp_str];
			cp_str++;
		}
		s_to_tb[index].copy[cp_str] = '\0';
		s_to_tb[index].str = s_to_tb[index].copy;
		index++;
		ac--;
	}
	s_to_tb[index].str = NULL;
	return (s_to_tb);
}
