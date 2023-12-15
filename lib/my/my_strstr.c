/*
** EPITECH PROJECT, 2023
** my_strstr
** File description:
** Reproduced strstr function
*/

#include "my.h"

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    char *result;

    while (str[i]) {
        if (my_char_equals(str[i], to_find[0])) {
            break;
        }
        i++;
    }
    result[i] = '\0';
    return result;
}
