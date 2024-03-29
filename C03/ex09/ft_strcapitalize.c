/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 10:24:35 by magonzal          #+#    #+#             */
/*   Updated: 2021/12/05 10:24:38 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *a)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (a[i] != '\0')
	{
		if ((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z'))
		{
			j = i - 1;
			if ((a[j] < 48 || a[j] > 57) && (a[j] < 65 || a[j] > 90))
			{
				if (a[j] < 97 || a[j] > 122)
					a[i] = a[i] - 32;
			}
		}
		i++;
	}
	return (a);
}
