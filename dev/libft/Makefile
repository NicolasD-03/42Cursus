SRC=ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_memcpy.c ft_memset.c ft_strlen.c
OBJS=(SRC:.c=.o)
EXEC=libft.a
CC=gcc
CFLAGS=-Wall -Wextra -Werror
RM=rm -f

all: $(EXEC)

.c: $(OBJS)
	$(CC) $(CFLAGS) -c $< -o $@

$(EXEC): $(OBJS)
	ar rc $(EXEC) $(OBJS)
	ranlib $(EXEC)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(EXEC)

re : fclean all


