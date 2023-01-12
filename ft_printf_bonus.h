/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <chris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:57:38 by chris             #+#    #+#             */
/*   Updated: 2023/01/12 16:05:32 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_BONUS_H
# define LIBFTPRINTF_BONUS_H

# include "ft_printf.h"

// This function ft_print_flags prints a string or char depending on the input
// flags and increasing a print counter by the amount of printed chars.
// Return: None.
void	ft_print_flags(int dest_val, char *flags, char conv, size_t *cnt_out);

#endif
