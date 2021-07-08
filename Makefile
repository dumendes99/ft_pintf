NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra 
CC = clang 
CREATE_LIB = ar -rcs

SRC =	ft_print_base.c \
		ft_print_type.c \
		ft_printf_utils_num.c \
		ft_printf_utils.c \
		ft_printf.c \

# OBJ_PATH = ./objects
OBJ =	$(subst .c,.o,$(SRC))

# INCLUDE_PATH = ./includes
# HEADER_FILE = ft_printf.h
# INCLUDE = $(addprefix $(INCLUDE_PATH)/,$(HEADER_FILE))

REMOVE = rm -rf 

all: $(NAME)

$(NAME): $(OBJ) 
	$(CREATE_LIB) $(NAME) $(ONJ)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	$(REMOVE) $(OBJ)

fclean: clean 
	$(REMOVE) $(NAME)

re: fclean all 