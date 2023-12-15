/*
** EPITECH PROJECT, 2023
** m_strcpy
** File description:
** Returns a copied string
*/

#include "my.h"

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i]) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
