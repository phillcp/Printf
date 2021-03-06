/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_print.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 09:59:01 by svieira           #+#    #+#             */
/*   Updated: 2021/07/24 14:03:47 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	n_print(va_list ap, int printed)
{
	int				*n;

	n = (int *)va_arg(ap, int *);
	*n = printed;
}

void	nhh_print(va_list ap, int printed)
{
	char	*c;

	c = (char *)va_arg(ap, char *);
	*c = printed;
}

void	nh_print(va_list ap, int printed)
{
	short int	*n;

	n = (short int *)va_arg(ap, int *);
	*n = (short int)printed;
}

void	nl_print(va_list ap, int printed)
{
	long int	*n;

	n = (long int *)va_arg(ap, long int *);
	*n = (long int)printed;
}

void	nll_print(va_list ap, int printed)
{
	long long int	*n;

	n = (long long int *)va_arg(ap, long long int *);
	*n = (long long int)printed;
}
