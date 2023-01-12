/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <chris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:11:11 by chris             #+#    #+#             */
/*   Updated: 2023/01/12 13:24:31 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function ft_put_str prints a string and increasing a print counter by
// the amount of printed chars.
// Return: None.

#include "ft_printf.h"

void	ft_put_str(const char *str, size_t *cnt_out)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		*cnt_out = *cnt_out + 1;
		str++;
	}
}
