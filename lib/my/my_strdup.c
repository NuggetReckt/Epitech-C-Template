/*
** EPITECH PROJECT, 2023
** my_strdup
** File description:
** Allocates memory for strings
*/

#include <stdlib.h>
#include "my.h"

char *my_strdup(char const *src)
{
    char *str = malloc(sizeof(char) * (my_strlen(src) + 1));
    int i = 0;

    while (src[i]) {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return str;
}
