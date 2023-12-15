/*
** EPITECH PROJECT, 2023
** my_strcat
** File description:
** Concatenates two strings
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int i = my_strlen(dest);
    int j = 0;
    int count = my_strlen(src);

    while (j < count) {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}
