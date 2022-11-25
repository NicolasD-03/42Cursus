# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndick <ndick@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/24 22:37:30 by ndick             #+#    #+#              #
#    Updated: 2022/11/24 22:38:17 by ndick            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= 
OBJS	= ${SRCS:.c=.o}
NAME	= libftprintf.a
CC		= gcc
HEADER	= .
CFLAGS	= -Wall -Wextra -Werror 
RM		= rm -f

${NAME}: ${OBJS}
	${CC} ${CFLAGS} -c ${SRCS} -I ${HEADER}
	ar rcs ${NAME} ${OBJS}

all: ${NAME}

clean:
	rm -f ${OBJS} ${OBJS_BONUS}

fclean: clean
	rm -f ${NAME}

re: fclean all