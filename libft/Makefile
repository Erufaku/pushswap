NAME	=	libft.a
#
SRCS	=	$(shell ls ./*.c)
#
HEADER	=	libft.h
OBJ		=	$(patsubst %.c, %.o, $(SRCS))
#
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -I$(HEADER)
#
.PHONY	:	all clean fclean
#
all		:	$(NAME)
#
$(NAME)	:	$(OBJ) $(HEADER)
	ar rcs $(NAME) $?
#
%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@
#
bonus :
	@make OBJ="$(OBJ_B)" all
#
clean	:
	@rm -f $(OBJ) $(OBJ_B)
#
fclean	:	clean
	@$(RM) $(NAME)
#
re		:	fclean all
