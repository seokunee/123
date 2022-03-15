# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seokchoi <seokchoi@42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 12:41:53 by seokchoi          #+#    #+#              #
#    Updated: 2022/02/21 15:55:39 by seokchoi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS    = ft_putnbr.c ft_atoi.c main.c ft_cal.c
OBJS	= ${SRCS:.c=.o}
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
NAME	= do-op

all:		${SRCS}
			${CC} ${CFLAGS} $^ -o ${NAME}
clean:
			rm -f ${OBJS}
fclean:		clean
			rm -f ${NAME}
re:			fclean all

.PHONY:		all clean fclean re
