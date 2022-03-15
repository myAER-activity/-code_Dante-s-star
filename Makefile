##
## EPITECH PROJECT, 2022
## dante
## File description:
## Makefile
##

all:
	make -C step1/
	make -C step2/

clean:
	make clean -C step1/
	make clean -C step2/

fclean:
	make fclean -C step1/
	make fclean -C step2/

re:	fclean all