/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.cbak                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <chris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 14:44:31 by chris             #+#    #+#             */
/*   Updated: 2023/01/12 16:43:59 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function ft_printf prints out the input arguments.
// Return: Return the amout if printed chars as int.

#include "ft_printf.h"

static int	print_conversion(va_list *args, char conversion, size_t *cnt_out)
{
	va_list	dest;

	va_copy(dest, *args);
	if (conversion == 'c')
		ft_put_single(va_arg(*args, int), cnt_out);
	if (conversion == 's')
		ft_put_str(va_arg(*args, char *), cnt_out);
	if (conversion == 'i' || conversion == 'd')
		ft_putnbr_base((long)va_arg(*args, int), "0123456789", cnt_out);
	if (conversion == 'u')
		ft_putnbr_base((long)va_arg(*args, unsigned int), "0123456789",
			cnt_out);
	if (conversion == 'x')
		ft_putnbr_base((long)va_arg(*args, unsigned int), "0123456789abcdef",
			cnt_out);
	if (conversion == 'X')
		ft_putnbr_base((long)va_arg(*args, unsigned int), "0123456789ABCDEF",
			cnt_out);
	if (conversion == 'p')
	{
		ft_put_str("0x", cnt_out);
		ft_putnbr_base((unsigned long long)va_arg(*args, unsigned long long),
			"0123456789abcdef", cnt_out);
	}
	return (0);
}

int	ft_printf(const char *fmt, ...)
{
	va_list		args;
	size_t		cnt_out;

	cnt_out = 0;
	va_start(args, fmt);
	while (*fmt != '\0')
	{
		if (*fmt != '%')
			ft_put_single(*fmt, &cnt_out);
		else if (*fmt == '%' && *(fmt + 1) == '%')
		{
			fmt++;
			ft_put_single(*fmt, &cnt_out);
		}
		else
		{
			fmt++;
			print_conversion(&args, *fmt, &cnt_out);
		}
		++fmt;
	}
	va_end(args);
	return (cnt_out);
}
