SRCS =	ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_memcpy.c \
		ft_memset.c \
		ft_strlen.c \
OBJS = ${SRCS:.c=.o}
NAME = libft.a
CC = gcc
HEADER = libft.h
CFLAGS = -Wall -Wextra -Werror -I ${HEADER}
RM = rm -f

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

all: ${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY: all clean fclean re