/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:21:14 by dhubleur          #+#    #+#             */
/*   Updated: 2021/12/05 17:05:04 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

size_t	ft_strlen(const char *s);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
int		ft_putnbr_fd(int n, int fd);
int		ft_putunbr_fd(unsigned int n, int fd);
void	ft_putlnbr_hexa_fd(long int nbr, int fd);
int		ft_putnbr_hexa_fd(unsigned int nbr, int fd);
int		ft_putnbr_hexa_cap_fd(unsigned int nbr, int fd);
int		ft_putulnbr_hexa_fd(unsigned long int n, int fd);

#endif