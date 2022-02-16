NAME	=	push_swap

SRCS =	push_swap.c ./libft/ft*.c
HEADER	=

OBJ	=	$(patsubst %.c, %.o, $(SRCS))
LIB_PATH = ./libft
CC	=	gcc -g
CFLAGS	=	-Wall -Wextra -Werror

all:$(NAME)

$(NAME):
	@make re -C $(LIB_PATH)
	@$(CC) -g3 $(CFLAGS) $(SRCS) -I$(INCLUDES)
	@ar rc $(NAME) $(OBJECTS) $(LIB_PATH)/*.o
	@ranlib $(NAME)

bonus: re

clean:
	@/bin/rm -f $(OBJECTS)
	@make clean -C $(LIB_PATH)


fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re