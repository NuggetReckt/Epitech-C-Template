/*
** EPITECH PROJECT, 2023
** my_show_word_array
** File description:
** Displays, word per word all the content of an array
*/

#include <stddef.h>
#include "my.h"

void my_show_word_array(char *const *tab)
{
    for (int i = 0; tab[i] != NULL; i++) {
        my_putstr(tab[i]);
        my_putstr("\n");
    }
}
