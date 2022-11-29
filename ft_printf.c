/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:46:37 by dhubleur          #+#    #+#             */
/*   Updated: 2021/12/05 16:36:27 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flags	init_flags(void)
{
	t_flags	flags;

	flags.alternate = FALSE;
	flags.space = FALSE;
	flags.plus = FALSE;
	return (flags);
}

int	read_argument(const char *str, int *i, va_list *ap)
{
	int	chars;

	if (str[*i + 1] && is_conversion(str[*i + 1]))
	{
		chars = print_conversion(str[*i + 1], init_flags(), ap);
		*i = *i + 1;
		return (chars);
	}
	else
	{
		ft_putchar_fd(str[*i], 1);
		return (1);
	}
}

void	print_percent(int *printed, int *i)
{
	ft_putchar_fd('%', 1);
	*printed = *printed + 1;
	*i = *i + 1;
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		printed;

	printed = 0;
	va_start(ap, str);
	i = -1;
	while (str[++i])
	{
		if (str[i] != '%')
		{
			ft_putchar_fd(str[i], 1);
			printed++;
		}
		else
		{
			if (str[i + 1] && str[i + 1] == '%')
				print_percent(&printed, &i);
			else
				printed += read_argument(str, &i, &ap);
		}
	}
	return (printed);
}
