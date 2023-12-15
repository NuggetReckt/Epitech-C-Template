/*
** EPITECH PROJECT, 2023
** my_compute_power_rec
** File description:
** Returns the power of a number
*/

#include "my.h"

int my_compute_power_rec(int nb, int p)
{
    if (p >= 1) {
        nb = nb * my_compute_power_rec(nb, p - 1);
    } else if (p == 0) {
        nb = 1;
    } else {
        nb = 0;
    }
    return nb;
}
