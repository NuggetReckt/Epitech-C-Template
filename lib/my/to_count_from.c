/*
** EPITECH PROJECT, 2023
** to_count_from
** File description:
** Counts how any chars before finding the one
*/

#include "my.h"

int to_count_from(char *str, char const *to_find)
{
    int i = 0;

    while (str[i]) {
        if (my_char_equals(str[i], to_find[0])) {
            break;
        }
        i++;
    }
    return i;
}
