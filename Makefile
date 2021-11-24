NAME_S	= server

NAME_C	= client

LIBFT	= ./libft/libft.a

CC		= gcc $(CGLAGS)
RM		= rm -rf
CFLAGS	= -Wall -Werror -Wextra

all: $(LIBFT) $(NAME_C) $(NAME_S)

$(LIBFT):
		make -C libft/

$(NAME_C):	client.c
	$(CC) -o $@ client.c $(LIBFT)

$(NAME_S):	server.c
	$(CC) -o $@ server.c $(LIBFT)

clean:
		make clean -C libft/

fclean:	clean
		$(RM) ./server ./client $(LIBFT)

re: fclean all

.PHONY:	libft all clean fclean re
