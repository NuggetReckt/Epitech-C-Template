/*
** EPITECH PROJECT, 2023
** my_getnbr
** File description:
** Returns a number, sent as a string
*/

#include "my.h"

int chiffre(char c)
{
    if (c == '0')
        return 0;
    if (c == '1')
        return 1;
    if (c == '2')
        return 2;
    if (c == '3')
        return 3;
    if (c == '4')
        return 4;
    if (c == '5')
        return 5;
    if (c == '6')
        return 6;
    if (c == '7')
        return 7;
    if (c == '8')
        return 8;
    if (c == '9')
        return 9;
}

int my_getnbr(char const *str)
{
    int i = my_strlen(str);
    int res = 0;
    int j = 0;

    while (i > 0){
        res = res + my_compute_power_rec(10, j) * chiffre(str[i - 1]);
        i--;
        j++;
    }
    return res;
}
