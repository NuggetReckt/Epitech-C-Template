/*
** EPITECH PROJECT, 2023
** my_compute_square_root
** File description:
** Returns the square root of a number
*/

#include "my.h"

int my_compute_square_root(int nb)
{
    int tmp = 0;
    int result = 0;

    while (tmp != nb) {
        result++;
        tmp = result * result;
        if (result >= nb) {
            return 0;
        }
    }
    if (result > 0) {
        return result;
    } else if (nb == 1) {
        return 1;
    } else {
        return 0;
    }
}
