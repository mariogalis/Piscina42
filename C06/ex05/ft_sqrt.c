/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:21:18 by magonzal          #+#    #+#             */
/*   Updated: 2021/12/09 16:21:22 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_aux(int nb, int aux)
{
	if (aux * aux > nb)
		return (0);
	else if (aux * aux < 0)
		return (0);
	else if (aux * aux == nb)
		return (aux);
	else
		return (ft_aux(nb, aux + 1));
}

int	ft_sqrt(int nb)
{
	int	aux;

	aux = 1;
	aux = ft_aux(nb, aux);
	return (aux);
}
