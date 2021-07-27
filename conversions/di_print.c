/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   di_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 19:49:41 by fheaton-          #+#    #+#             */
/*   Updated: 2021/07/24 14:00:22 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	conv_hh(int n)
{
	char	c;

	c = (char)n;
	n = (int)c;
	return (n);
}

static int	num_len(int n, t_fmt *fmt)
{
	int	len;

	len = 0;
	if (n == 0 && !(fmt->point && fmt->precision == 0))
		len = 1;
	if (n < 0 || fmt->plus)
		len++;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static void	di_zero_print(int n, t_fmt *fmt, int extra)
{
	if (fmt->plus && n >= 0)
		write(1, &fmt->plus, 1);
	if (n < 0)
		write(1, "-", 1);
	while (extra-- > 0)
		write(1, "0", 1);
	if (n != 0 || !fmt->point || fmt->precision != 0)
		ft_putnbr_nosign(n);
}

static void	di_actual_print(int n, t_fmt *fmt, int extra_width, int extra_preci)
{
	if (fmt->fill == '0')
		di_zero_print(n, fmt, extra_width);
	else
	{
		if (!fmt->left_align)
		{
			while (extra_width-- > 0)
				write(1, " ", 1);
		}
		di_zero_print(n, fmt, extra_preci);
		if (fmt->left_align)
		{
			while (extra_width-- > 0)
				write(1, " ", 1);
		}
	}
}

int	di_print(t_fmt *fmt, va_list ap)
{
	int	n;
	int	n_len;
	int	real_preci;
	int	extra_preci;
	int	extra_width;

	n = va_arg(ap, int);
	if (fmt->size == 'H')
		n = conv_hh(n);
	n_len = num_len(n, fmt);
	real_preci = fmt->precision;
	if (n < 0 || (fmt->plus && !(n == 0 && fmt->point && fmt->precision == 0)))
		real_preci++;
	extra_preci = 0;
	if (real_preci > n_len)
		extra_preci = real_preci - n_len;
	extra_width = calc_width(n_len, fmt->width, real_preci);
	if (fmt->point && fmt->fill != ' ')
		fmt->fill = ' ';
	di_actual_print(n, fmt, extra_width, extra_preci);
	return (extra_preci + extra_width + n_len);
}
