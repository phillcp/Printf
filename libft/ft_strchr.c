/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 02:26:39 by marvin            #+#    #+#             */
/*   Updated: 2024/05/14 13:26:40 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	a;

	a = 0;
	while (s[a] != '\0')
	{
		if (s[a] == (unsigned char)c)
			return ((char *)s + a);
		a++;
	}
	if (c == '\0')
		return ((char *)s + a);
	return (NULL);
}
