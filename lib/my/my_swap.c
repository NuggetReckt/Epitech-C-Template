/*
** EPITECH PROJECT, 2023
** my_swap
** File description:
** Swaps the content of two ints
*/

#include "my.h"

void my_swap(char *a, char *b)
{
    char c = *a;
    char d = *b;

    *a = d;
    *b = c;
}
