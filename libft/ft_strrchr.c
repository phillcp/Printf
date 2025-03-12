/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 01:17:37 by marvin            #+#    #+#             */
/*   Updated: 2024/05/14 13:51:50 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		a;

	a = ft_strlen(s);
	while (a >= 0)
	{
		if (s[a] == (unsigned char)c)
			return ((char *)&s[a]);
		a--;
	}
	return (NULL);
}
