# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seokchoi <seokchoi@42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/19 18:40:47 by seokchoi          #+#    #+#              #
#    Updated: 2022/02/23 16:53:21 by seokchoi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
SOURCE	= srcs/
SRCS    = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
OBJS	= ${addprefix ${SOURCE},${SRCS:.c=.o}}
HEAD	= includes
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
NAME	= libft.a

.PHONY:		all clean fclean re

${NAME}:	${OBJS}
			ar -rc ${NAME} ${OBJS}
all :		${NAME}
.c.o:		${SRCS}
	${CC} ${CFLAGS} -I ${HEAD} -c $^ -o ${^:.c=.o}
clean:
			rm -f ${OBJS}
fclean:		clean
			rm -f ${NAME}
re:			fclean all
