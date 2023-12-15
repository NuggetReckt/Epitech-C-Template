/*
** EPITECH PROJECT, 2023
** my_get_prime
** File description:
** Returns a prime number
*/

#include "my.h"

int my_get_prime(int nb)
{
    int result = 0;

    for (int i = 2; i <= nb / 2; i++) {
        if (nb % i == 0) {
            result = i;
            break;
        }
    }
    if (nb <= 1) {
        return 2;
    }
    return result;
}
