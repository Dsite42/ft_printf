/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <chris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:28:53 by chris             #+#    #+#             */
/*   Updated: 2023/01/12 13:37:02 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function ft_putnbr_base prints a number by converting it to an other 
// base system.
// Return: None.

#include "ft_printf.h"

void	ft_putnbr_base(long double nb, char *base, size_t *cnt_output)
{
	long double	strlen;

	strlen = ft_strlen(base);
	if (nb < strlen && nb >= 0)
	{
		ft_put_single(base[(long)nb], cnt_output);
	}
	else if (nb >= strlen)
	{
		ft_putnbr_base(nb / strlen, base, cnt_output);
		ft_put_single(base[(unsigned long)nb % (unsigned long)strlen], cnt_output);
	}
	else if (ft_strncmp("0123456789", base, 16) == 0)
	{
		ft_put_single('-', cnt_output);
		ft_putnbr_base(-nb, base, cnt_output);
	}	
	else if (ft_strncmp("0123456789abcdef", base, 16) == 0)
		ft_putnbr_base(-nb, base, cnt_output);
	else
		ft_putnbr_base((unsigned int)nb, base, cnt_output);
}
