/*
** EPITECH PROJECT, 2023
** my_revstr
** File description:
** Returns a reversed string
*/

#include "my.h"

char *my_revstr(char *str)
{
    int i = 0;
    int j = my_strlen(str) - 1;

    while (i < j) {
        my_swap(&str[i], &str[j]);
        j--;
        i++;
    }
    return str;
}
