/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 02:34:40 by marvin            #+#    #+#             */
/*   Updated: 2021/02/24 19:52:00 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*arr;

	if (size != 0)
	{
		if (!(arr = malloc(nmemb * size)))
			return (NULL);
		ft_memset(arr, 0, size * nmemb);
	}
	else
	{
		if (!(arr = malloc(0)))
			return (NULL);
	}
	return ((void *)arr);
}
