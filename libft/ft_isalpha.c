/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 23:46:45 by marvin            #+#    #+#             */
/*   Updated: 2024/05/14 13:21:48 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isupper(int c)
{
	return (c >= 65 && c <= 90);
}

static int	ft_islower(int c)
{
	return (c >= 97 && c <= 122);
}

int	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}
