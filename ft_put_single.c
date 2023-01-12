/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_single.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <chris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:11:11 by chris             #+#    #+#             */
/*   Updated: 2023/01/12 13:24:37 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function ft_put_single prints one char and increasing a print counter.
// Return: None.

#include "ft_printf.h"

void	ft_put_single(const char c, size_t *cnt_out)
{
	write(1, &c, 1);
	*cnt_out = *cnt_out + 1;
}
