/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa_cap_fd.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:41:46 by dhubleur          #+#    #+#             */
/*   Updated: 2021/12/05 17:12:09 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_hexa_cap_fd(unsigned int n, int fd)
{
	int				length;
	char			*base;
	unsigned int	cpy;

	base = "0123456789ABCDEF";
	length = 1;
	cpy = n;
	while (cpy >= 16)
	{
		cpy /= 16;
		length++;
	}
	if (n >= 16)
		ft_putnbr_hexa_cap_fd(n / 16, fd);
	ft_putchar_fd(base[n % 16], fd);
	return (length);
}
