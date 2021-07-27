/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 12:37:58 by marvin            #+#    #+#             */
/*   Updated: 2021/02/12 15:33:03 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_fill_string(unsigned int n, int index, char *str)
{
	if (n >= 10)
		ft_fill_string(n / 10, index - 1, str);
	str[index] = n % 10 + '0';
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	nbr;
	int				size;

	size = 1;
	if (n < 0)
	{
		nbr = -n;
		size++;
	}
	else
		nbr = n;
	while (nbr >= 10)
	{
		nbr /= 10;
		size++;
	}
	if (!(str = malloc(sizeof(char) * size + 1)))
		return (NULL);
	str[size] = '\0';
	ft_fill_string(n < 0 ? -n : n, size - 1, str);
	if (n < 0)
		str[0] = '-';
	return (str);
}
