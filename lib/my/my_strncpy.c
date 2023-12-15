/*
** EPITECH PROJECT, 2023
** my_strncpy
** File description:
** Returns a copied string from n characters
*/

#include "my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    for (i; i <= n; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return dest;
}
