SRC = ft_printf.c printchars.c printdigits.c printhexa.c ../libft/ft_putchar_fd.c ../libft/ft_putstr_fd.c ../libft/ft_putnbr_fd.c ../libft/ft_strlen.c

OBJS = ${SRC:.c=.o}

NAME = libftprintf.a

CC = gcc

AR = ar rcs

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
	${AR} ${NAME} ${OBJS}

all: ${NAME}

bonus: ${OBJS_BONUS} ${OBJS}
	${AR} ${NAME} ${OBJS} ${OBJS_BONUS}

clean:
	${RM} ${OBJS} ${OBJS_BONUS} 

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus