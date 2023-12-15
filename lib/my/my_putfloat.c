/*
** EPITECH PROJECT, 2023
** my_putfloat.c
** File description:
** algo de my_putfloat
*/

#include "my.h"

int my_round(float flt, int mul)
{
    float test = 0.5 / mul;
    int tmp = (int) ((flt + test) * mul) % mul;

    flt = flt - (int) flt;
    while (flt < 0.1) {
        flt *= 10;
        my_put_nbr(0);
    }
    return tmp;
}

void my_putfloat(float flt, int nbvirgule)
{
    int mul = my_compute_power_it(10, nbvirgule - 1);

    my_put_nbr((int) flt);
    my_putchar('.');
    if (flt < 0) {
        flt = flt * - 1;
        my_put_nbr(my_round(flt, mul));
    } else {
        my_put_nbr(my_round(flt, mul));
    }
}
