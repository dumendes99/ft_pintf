NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra 
CC = clang

SRC =	./src/print_base.c \
		./src/print_type.c \
		./src/printf_utils_num.c \
		./src/printf_utils.c \
		./src/init_struct.c \
		ft_printf.c 

OBJ =	$(SRC:.c=.o)

REMOVE = rm -rf 

all: $(NAME)

$(NAME): $(OBJ) 
	ar -r $(NAME) $(ONJ)

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
	$(REMOVE) $(OBJ)

fclean: clean 
	$(REMOVE) $(NAME)

re: fclean all 