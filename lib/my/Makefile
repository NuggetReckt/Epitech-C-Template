##
## EPITECH PROJECT, 2023
## Day10 - Task01
## File description:
## Compiles our lib
##

SRC	=	my_putchar.c	\
		my_isneg.c	\
		my_put_nbr.c	\
		my_swap.c	\
		my_putstr.c	\
		my_strlen.c	\
		my_getnbr.c	\
		my_sort_int_array.c	\
		my_compute_power_rec.c	\
		my_compute_power_it.c  \
		my_compute_square_root.c	\
		my_is_prime.c	\
		my_find_prime_sup.c	\
		my_strcpy.c	\
		my_strncpy.c	\
		my_revstr.c	\
		my_strstr.c	\
		my_strcmp.c	\
		my_strncmp.c	\
		my_strupcase.c	\
		my_strlowcase.c	\
		my_strcapitalize.c	\
		my_str_isalpha.c	\
		my_str_isnum.c	\
		my_str_islower.c	\
		my_str_isupper.c	\
		my_str_isprintable.c	\
		my_showstr.c	\
		my_showmem.c	\
		my_strcat.c	\
		my_strncat.c	\
		my_show_word_array.c	\
		my_strdup.c	\
		to_count_from.c	\
		my_putfloat.c	\

NAME	=	libmy.a

OBJ	=	$(SRC:.c=.o)	\
		printf_main.o	\
		printf_utils.o	\
		printf_utils2.o	\
		printf_utils_e.o	\

all:	$(NAME)

$(NAME): build_printf $(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../
	cp my.h ../../include/

build_printf:
	@(cd my_printf/ && $(MAKE))

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f ../$(NAME)

re: fclean all
