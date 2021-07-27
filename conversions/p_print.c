/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_print.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 19:49:41 by fheaton-          #+#    #+#             */
/*   Updated: 2021/07/24 14:04:17 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	p_num_len(unsigned long n)
{
	int	len;

	len = 0;
	if (n == 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 16;
	}
	len += 2;
	return (len);
}

int	p_print(t_fmt *fmt, va_list ap)
{
	unsigned long	p;
	int				p_len;
	int				extra_width;
	int				total_width;

	p = (unsigned long)va_arg(ap, void *);
	p_len = p_num_len(p);
	extra_width = 0;
	if (fmt->width > p_len)
		extra_width = fmt->width - p_len;
	total_width = extra_width + p_len;
	if (!fmt->left_align)
	{
		while (extra_width-- > 0)
			write(1, " ", 1);
	}
	write(1, "0x", 2);
	ft_put_xl(p, "0123456789abcdef");
	if (fmt->left_align)
	{
		while (extra_width-- > 0)
			write(1, " ", 1);
	}
	return (total_width);
}
