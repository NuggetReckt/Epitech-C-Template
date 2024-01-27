##
## EPITECH PROJECT, <year>
## <project_name>
## File description:
## Builds <project_name>
##

CC	=	gcc

NAME	=	test

SRC 	=	src/main.c

OBJ	=	$(SRC:.c=.o)

DEBUG	=	-Wall	\
			-Wextra	\
			-g3

LDFLAGS	=	-L./lib

LDLIBS	=	-lmy

LIB_PATH	=	./lib/my/

CPPFLAGS 	=	-Iinclude

.PHONY: all clean debug fclean re

all: 	$(NAME)

$(NAME):	$(OBJ)
	$(MAKE) -C $(LIB_PATH)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS) $(LDLIBS) $(CPPFLAGS)

debug: fclean	$(OBJ)
	$(MAKE) -C $(LIB_PATH)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS) $(LDLIBS) $(CPPFLAGS) $(DEBUG)

clean:
	$(MAKE) clean -C $(LIB_PATH)
	$(RM) $(OBJ)

fclean: clean
	$(MAKE) fclean -C $(LIB_PATH)
	$(RM) $(NAME)

re: fclean all
