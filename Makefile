NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra 
CC = clang

SRC =	ft_print_base.c \
		ft_print_type.c \
		ft_printf_utils_num.c \
		ft_printf_utils.c \
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