/*
** EPITECH PROJECT, 2023
** my_is_prime
** File description:
** Returns 1 if number is prime, 0 if not
*/

#include "my.h"

int my_is_prime(int nb)
{
    int result = 1;

    for (int i = 2; i <= nb / 2; i++) {
        if (nb % i == 0) {
            result = 0;
            break;
        }
    }
    if (nb == 1) {
        return 0;
    }
    return result;
}
