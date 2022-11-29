# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/25 09:41:48 by dhubleur          #+#    #+#              #
#    Updated: 2021/12/05 17:04:49 by dhubleur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 			=	ft_printf.c \
					conversions/convert_char.c \
					conversions/convert_str.c \
					conversions/convert_ptr.c \
					conversions/convert_dbl.c \
					conversions/convert_int.c \
					conversions/convert_uint.c \
					conversions/convert_hex.c \
					conversions/convert_hex_cap.c \
					conversions/convert.c \
					libft/ft_putchar_fd.c \
					libft/ft_putnbr_fd.c \
					libft/ft_putnbr_hexa_cap_fd.c \
					libft/ft_putnbr_hexa_fd.c \
					libft/ft_putulnbr_hexa_fd.c \
					libft/ft_putstr_fd.c \
					libft/ft_putunbr_fd.c \
					libft/ft_strlen.c

BONUS_SRCS		=	ft_printf_bonus.c \
					conversions/convert_char.c \
					conversions/convert_str.c \
					conversions/convert_ptr.c \
					conversions/convert_dbl.c \
					conversions/convert_int.c \
					conversions/convert_uint.c \
					conversions/convert_hex.c \
					conversions/convert_hex_cap.c \
					conversions/convert.c \
					flags/flags_util_bonus.c \
					libft/ft_putchar_fd.c \
					libft/ft_putnbr_fd.c \
					libft/ft_putnbr_hexa_cap_fd.c \
					libft/ft_putulnbr_hexa_fd.c \
					libft/ft_putnbr_hexa_fd.c \
					libft/ft_putstr_fd.c \
					libft/ft_putunbr_fd.c \
					libft/ft_strlen.c

OBJS		=	${SRCS:.c=.o}
BONUS_OBJS	=	${BONUS_SRCS:.c=.o}
INCL		=	./includes 

NAME		=	libftprintf.a

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror

.c.o:
				${CC} ${CFLAGS} -I ${INCL} -c $< -o ${<:.c=.o}

all:		${NAME}

$(NAME):	${OBJS}
				ar rc ${NAME} ${OBJS}
				ranlib ${NAME}

clean:
				rm -f ${OBJS} ${BONUS_OBJS}

fclean:		clean
				rm -f ${NAME}

bonus: 		${BONUS_OBJS}
				ar rc ${NAME} ${BONUS_OBJS}
				ranlib ${NAME}
re:			fclean all

.PHONY:			all clean fclean re bonus
			