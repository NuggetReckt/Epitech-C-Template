/*
** EPITECH PROJECT, 2023
** my_find_prime_sup
** File description:
** Returns the smallest prime number that is greater than, or equal to a number
*/

#include "my.h"

int my_find_prime_sup(int nb)
{
    int i = nb;

    while (my_get_prime(i) != 0) {
        i++;
    }
    return i;
}
