##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile c file
##

SRCC = ./src/

SRC	=	$(SRCC)main.c	\
		$(SRCC)stumper.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Iinclude -g

LDFLAGS	=	-lm

NAME	=	countwords

all:	$(NAME)

$(NAME):	 $(OBJ)
	gcc -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
