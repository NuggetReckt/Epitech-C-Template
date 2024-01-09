/*
** EPITECH PROJECT, 2023
** my_is_prime
** File description:
** Returns 1 if number is prime, 0 if not
*/

#include <stdbool.h>
#include "my.h"

int my_is_prime(int nb)
{
    bool is_prime = true;

    for (int i = 2; i <= nb / 2; i++) {
        if (nb % i == 0) {
            is_prime = false;
            break;
        }
    }
    if (nb == 1) {
        return false;
    }
    return is_prime;
}
