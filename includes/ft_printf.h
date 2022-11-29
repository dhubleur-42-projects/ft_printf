/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:10:42 by dhubleur          #+#    #+#             */
/*   Updated: 2021/12/02 16:26:14 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>

typedef enum e_bool {
	TRUE = 1,
	FALSE = 0
}	t_bool;

typedef struct s_flags {
	t_bool	alternate;
	t_bool	space;
	t_bool	plus;
}	t_flags;

int		ft_printf(const char *str, ...);

int		print_conversion(char conv, t_flags flags, va_list *ap);
t_bool	is_conversion(char c);

int		print_char(va_list *ap);
int		print_str(va_list *ap);
int		print_ptr(t_flags flags, va_list *ap);
int		print_dbl(t_flags flags, va_list *ap);
int		print_int(t_flags flags, va_list *ap);
int		print_uint(va_list *ap);
int		print_hex(t_flags flags, va_list *ap);
int		print_hex_cap(t_flags flags, va_list *ap);

t_flags	init_flags(void);
t_bool	is_flag(char c);
t_bool	is_already_flag(t_flags flags, char c);
int		check_flags(const char *str, int i, t_flags *flags);

#endif