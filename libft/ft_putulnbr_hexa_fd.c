/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putulnbr_hexa_fd.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:41:46 by dhubleur          #+#    #+#             */
/*   Updated: 2021/12/05 17:11:53 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putulnbr_hexa_fd(unsigned long int n, int fd)
{
	int					length;
	char				*base;
	unsigned long int	cpy;

	base = "0123456789abcdef";
	length = 1;
	cpy = n;
	while (cpy >= 16)
	{
		cpy /= 16;
		length++;
	}
	if (n >= 16)
		ft_putulnbr_hexa_fd(n / 16, fd);
	ft_putchar_fd(base[n % 16], fd);
	return (length);
}
