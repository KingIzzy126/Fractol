NAME = fractol

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

LIBFT = ./libft/libft.a
MLX = ./mlx

SRCS = graphic.c run.c
OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(LIBFT): 
	$(MAKE) -C ./libft

mlx_compiled:
	$(MAKE) -C $(MLX)

$(NAME): mlx_compiled $(OBJ) $(LIBFT)
	$(CC) $(OBJ) $(LIBFT) -L$(MLX) -lmlx -framework OpenGL -framework AppKit -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -I$(MLX) -c $< -o $@

clean:
	$(MAKE) clean -C ./libft
	$(MAKE) clean -C $(MLX)
	$(RM) $(OBJ)

fclean: clean
	$(MAKE) fclean -C ./libft
	$(RM) $(NAME)

re: fclean all

.PHONY: all fclean clean re