##
## EPITECH PROJECT, <year>
## <project_name>
## File description:
## Builds <project_name>
##

CC	=	gcc

NAME	=	<bin_name>

SRC 	=	src/main.c

OBJ	=	$(SRC:.c=.o)

DEBUG	=	-g3

LDFLAGS	=	-L./lib

LDLIBS	=	-lmy

LIB_PATH	=	./lib/my/

CFLAGS	=	-Wall	\
			-Wextra

CPPFLAGS 	=	-Iinclude

.PHONY: all clean debug fclean re

all: 	$(NAME)

$(NAME):	$(OBJ)
	$(MAKE) -C $(LIB_PATH)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LDFLAGS) $(LDLIBS) $(CPPFLAGS)

debug: fclean	$(OBJ)
	$(MAKE) -C $(LIB_PATH)
	$(CC) $(CFLAGS) $(DEBUG) -o $(NAME) $(OBJ) $(LDFLAGS) $(LDLIBS) $(CPPFLAGS)

clean:
	$(MAKE) clean -C $(LIB_PATH)
	$(RM) $(OBJ)

fclean: clean
	$(MAKE) fclean -C $(LIB_PATH)
	$(RM) $(NAME)

re: fclean all
