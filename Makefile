CFLAGS = -Wall -Wextra -Werror -g
CC = cc
TARGET = codexion
SRC = main.c parse.c process.c utils.c
OBJ = $(SRC:.c=.o)


all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(TARGET)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(TARGET)

re: fclean all
