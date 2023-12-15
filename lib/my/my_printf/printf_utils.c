/*
** EPITECH PROJECT, 2023
** MyPrintf - Utils
** File description:
** Utility file for MyPrintf project
*/

#include <stdlib.h>
#include <stdarg.h>
#include "../my.h"

int get_octal(int o)
{
    int count = 0;
    int count_octo = 0;

    while (count != o) {
        count++;
        count_octo++;
        if (count % 8 == 0) {
            count_octo = count_octo + 3;
        }
    }
    return count_octo;
}

char *get_hex_arr(char c)
{
    char *hex = malloc(sizeof(char) * 16);

    if (c == 'X') {
        hex = "0123456789ABCDEF";
    } else if (c == 'x') {
        hex = "0123456789abcdef";
    }
    return hex;
}

char get_char(int nb, char *hex)
{
    if (nb < 9) {
        return (char) nb + 48;
    } else {
        return hex[15];
    }
}

char *get_hex_from_int(char c, unsigned int nb)
{
    char *hex = get_hex_arr(c);
    char *res = malloc(sizeof(char) * 16);
    int rests[50];
    int i = 0;
    int j = 0;

    while (nb >= 16) {
        rests[i] = nb % 16;
        nb = nb / 16;
        i++;
    }
    res[0] = get_char(nb, hex);
    while (i > 0) {
        i--;
        j++;
        res[j] = hex[rests[i]];
    }
    res[j + 1] = '\0';
    return res;
}

char *get_addr(void *ptr)
{
    int tmp = (int) ptr;

    my_putstr("0x");
    return get_hex_from_int('x', tmp);
}
