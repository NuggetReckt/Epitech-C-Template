/*
** EPITECH PROJECT, 2023
** my_isneg
** File description:
** Displays either N if given number is negative or P if positive or null
*/

#include "my.h"

int my_isneg(int n)
{
    if (n < 0) {
        my_putchar('N');
    } else if (n >= 0) {
        my_putchar('P');
    }
    return 0;
}
