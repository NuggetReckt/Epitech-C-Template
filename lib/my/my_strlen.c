/*
** EPITECH PROJECT, 2023
** my_strlen
** File description:
** Returns the number of characters in string
*/

#include "my.h"

int my_strlen(char const *str)
{
    int count = 0;

    while (str[count]) {
        count++;
    }
    return count;
}
