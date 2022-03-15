##
## EPITECH PROJECT, 2022
## dante
## File description:
## Makefile
##

CC		= gcc

SRC		= $(wildcard *.c)

OBJ		= $(SRC:.c=.o)

BIN		= perfect_maze

all:	$(BIN)

$(BIN):	$(OBJ)
		$(CC) $(OBJ) -o $@

clean:
	$(RM) $(OBJ)

fclean:	clean
		$(RM) $(BIN)

re:	fclean all