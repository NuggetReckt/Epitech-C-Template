/*
** EPITECH PROJECT, 2023
** my_put_nbr
** File description:
** Displays the number given as parameter
*/

#include "my.h"

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    if (nb > 9) {
        my_put_nbr(nb / 10);
        my_putchar((nb % 10) + '0');
    } else {
        my_putchar(nb + '0');
    }
    if (nb > 2147483647 || nb < -2147483647) {
        return 84;
    }
    return 0;
}
