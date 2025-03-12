/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 02:34:40 by marvin            #+#    #+#             */
/*   Updated: 2024/05/14 13:21:37 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*arr;

	if (size != 0)
	{
		arr = malloc(nmemb * size);
		if (!arr)
			return (NULL);
		ft_memset(arr, 0, size * nmemb);
	}
	else
	{
		arr = malloc(0);
		if (!arr)
			return (NULL);
	}
	return ((void *)arr);
}
