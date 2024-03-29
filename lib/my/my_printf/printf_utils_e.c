/*
** EPITECH PROJECT, 2023
** percent e
** File description:
** algo de percent e
*/

#include "../my.h"

float condition_flot(float flot, int i)
{
    if (flot > 9.999999) {
        while (flot >= 9.999999) {
            flot = flot / 10;
            i++;
        }
    }
    if (flot < 1) {
        while (flot <= 1) {
            flot = flot * 10;
            i++;
        }
    }
    return flot;
}

int condition(float flot, int i)
{
    if (flot > 9.999999) {
        while (flot >= 9.999999) {
            flot = flot / 10;
            i++;
        }
    }
    if (flot < 1) {
        while (flot <= 1) {
            flot = flot * 10;
            i++;
        }
    }
    return i;
}

void display_e(char c)
{
    if (c == 'E') {
        my_putchar('E');
    } else {
        my_putchar('e');
    }
}

void percent_e(float flt, char c)
{
    int i = 0;
    float flot = (flt < 0) ? flt* -1 : flt;
    char sign = '+';

    if (flt < 0) {
        my_putchar('-');
    }
    sign = (flot < 1) ? '-' : '+';
    my_putfloat(condition_flot(flot, i), 6);
    display_e(c);
    my_putchar(sign);
    if (condition(flot, i) <= 9.999999) {
        my_putchar('0');
    }
    my_put_nbr(condition(flot, i));
}
