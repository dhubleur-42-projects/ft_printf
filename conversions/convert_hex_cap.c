/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_hex_cap.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:10:47 by dhubleur          #+#    #+#             */
/*   Updated: 2021/12/05 16:36:39 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex_cap(t_flags flags, va_list *ap)
{
	int	chars;

	chars = 0;
	if (flags.alternate)
	{
		ft_putstr_fd("0X", 1);
		chars += 2;
	}
	chars += ft_putnbr_hexa_cap_fd(va_arg(*ap, unsigned int), 1);
	va_end(*ap);
	return (chars);
}
