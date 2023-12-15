/*
** EPITECH PROJECT, 2023
** my_strncat
** File description:
** Concatenates n character of the src string to the end of the dest string
*/

#include "my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = my_strlen(dest);
    int j = 0;

    while (j < nb) {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}
