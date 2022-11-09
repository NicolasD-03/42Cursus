# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndick <ndick@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/09 19:23:23 by ndick             #+#    #+#              #
#    Updated: 2022/11/09 20:33:41 by ndick            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS	= ft_isalpha.c	ft_isdigit.c	ft_isalnum.c	ft_isascii.c	ft_isprint.c	\
		  ft_strlen.c 	ft_memset.c		ft_bzero.c		ft_memcpy.c		ft_memmove.c	\
		  ft_strlcpy.c	ft_strlcat.c	ft_toupper.c	ft_tolower.c	ft_strchr.c		\
		  ft_strrchr.c	ft_strncmp.c	ft_memchr.c		ft_memcmp.c		ft_strnstr.c	\
		  ft_atoi.c		ft_calloc.c		ft_strdup.c
		  
OBJS	= ${SRCS:.c=.o}
NAME	= libft.a
CC		= gcc
HEADER	= libft.h
CFLAGS	= -Wall -Wextra -Werror 
RM		= rm -f

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${HEADER}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all