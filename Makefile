CFLAGS = -Wall -Wextra -Werror -g
CC = cc
NAME = codexion
SRC = main.c parse.c process.c utils.c
OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
