/*
** EPITECH PROJECT, 2023
** my_putstr
** File description:
** Displays one by one, the characters of a string
*/

#include "my.h"
#include <unistd.h>

int my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
    return 0;
}
