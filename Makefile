##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## task01
##

SRC	=	src/main.c \

OBJ	=	$(SRC:.c=.o)

NAME	=	test

CFLAGS	=	-L lib/my -lmy -I include

all: 	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my
	gcc -g -o $(NAME) $(SRC) $(CFLAGS)

clean:
	rm -f *.o

fclean:	clean
	rm -f *log
	rm -f *.a
	rm -f $(NAME)
	rm -f $(OBJ)
	rm -f $(wildcard *~)

re:	fclean all
