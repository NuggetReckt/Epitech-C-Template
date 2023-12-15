/*
** EPITECH PROJECT, 2023
** my_putchar
** File description:
** Displays one character
*/

#include <unistd.h>
#include "my.h"

extern int COUNT;

void my_putchar(char c)
{
    write(1, &c, 1);
    COUNT++;
}
