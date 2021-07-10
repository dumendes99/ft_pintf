NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra 
CC = clang

SRC =	print_base.c \
		print_type.c \
		printf_utils_num.c \
		printf_utils.c \
		ft_printf.c 

OBJ =	$(SRC:.c=.o)

REMOVE = rm -rf 

all: $(NAME)

$(NAME): $(OBJ) 
	ar -r $(NAME) $(ONJ)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	$(REMOVE) $(OBJ)

fclean: clean 
	$(REMOVE) $(NAME)

re: fclean all 