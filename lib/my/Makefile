##
## EPITECH PROJECT, 2024
## Libmy
## File description:
## Compiles our lib
##

SRC	=	my_putchar.c	\
		my_isneg.c	\
		my_put_nbr.c	\
		my_swap.c	\
		my_putstr.c	\
		my_puterr.c	\
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
		my_str_equals.c	\
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
		my_printf/printf_main.c	\
		my_printf/printf_utils.c	\
		my_printf/printf_utils2.c	\
		my_printf/printf_utils_e.c

NAME	=	libmy.a

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../
	cp my.h ../../include/

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f ../$(NAME)

re: fclean all
