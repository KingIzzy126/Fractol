NAME = fractol

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

LIBFT = ./libft/libft.a

SRCS = main.c
OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(LIBFT): 
	$(MAKE) -C ./libft

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(OBJ) $(LIBFT) -Lmlx -lmlx -framework OpenGL -framework AppKit -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -Imlx -c $< -o $@

clean:
	$(MAKE) clean -C ./libft
	rm $(OBJ)
	make -C mlx clean

fclean: clean
	$(MAKE) fclean -C ./libft
	rm $(NAME)

re: fclean all

.PHONY: all fclean clean re