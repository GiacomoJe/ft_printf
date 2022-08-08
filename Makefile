NAME = libftprintf.a
CC = cc
FLAGS = -Wall -Wextra
FILES = ft_printf.c ft_printf_char.c ft_printf_hex.c ft_printf_numbers.c ft_printf_utils.c 

OBJ = $(FILES:%.c=%.o)

all: $(NAME)
	$(CC) $(FLAGS) main.c $(NAME)
	./a.out

$(NAME): $(OBJ)
	ar -crs $(NAME) $(OBJ)

%.o: %.c ft_printf.h
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(OBJ) $(NAME)

re: fclean	all

.PHONY: all clean fclean re
