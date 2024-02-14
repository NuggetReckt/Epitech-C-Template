/*
** EPITECH PROJECT, 2023
** MyPrintf - Utils2
** File description:
** Utility file for MyPrintf project
*/

#include <stdarg.h>
#include "../my.h"

int get_unsigned(int nb)
{
    if (nb < 0) {
        return nb * -1;
    }
    return nb;
}

void get_precision(int *i, const char *format, va_list *list)
{
    int prec = (int) format[*i + 2] - 48;
    char flag = format[*i + 3];

    switch (flag) {
    case 'f':
    case 'F':
        my_putfloat((float) va_arg(*list, double), prec);
        *i = *i + 2;
        break;
    case 's':
        break;
    }
}
