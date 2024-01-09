/*
** EPITECH PROJECT, 2023
** my_puterr
** File description:
** Displays a string on the error output
*/

#include <unistd.h>
#include "my.h"

void my_puterr(char const *str)
{
    write(2, str, my_strlen(str));
}
