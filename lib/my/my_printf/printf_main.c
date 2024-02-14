/*
** EPITECH PROJECT, 2023
** MyPrintf
** File description:
** Main file for MyPrintf project
*/

#include <stdarg.h>
#include "../my.h"
#include "include/utils.h"

extern int COUNT;

void get_format4(int *i, const char *format, va_list *list)
{
    switch (format[*i + 1]) {
        case 'E':
        case 'e':
            percent_e((float) va_arg(*list, double), format[*i + 1]);
            *i = *i + 1;
            break;
        case 'G':
        case 'g':
            *i = *i + 1;
            break;
        default:
            break;
    }
}

void get_format3(int *i, const char *format, va_list *list)
{
    switch (format[*i + 1]) {
        case 'n':
            my_put_nbr(COUNT);
            *i = *i + 1;
            break;
        case 'c':
            my_putchar((char) va_arg(*list, int));
            *i = *i + 1;
            break;
        case 'p':
            my_putstr(get_addr(va_arg(*list, void *)));
            *i = *i + 1;
            break;
        case 'u':
            my_put_nbr(get_unsigned(va_arg(*list, int)));
            *i = *i + 1;
            break;
        default:
            get_format4(i, format, list);
    }
}

void get_format2(int *i, const char *format, va_list *list)
{
    switch (format[*i + 1]) {
        case 's':
        case 'm':
            my_putstr(va_arg(*list, char *));
            *i = *i + 1;
            break;
        case '%':
            my_putchar('%');
            *i = *i + 1;
            break;
        case '.':
            get_precision(i, format, list);
            *i = *i + 1;
            break;
        default:
            get_format3(i, format, list);
    }
}

void get_format(int *i, const char *format, va_list *list)
{
    switch (format[*i + 1]) {
        case 'd':
        case 'i':
            my_put_nbr(va_arg(*list, int));
            *i = *i + 1;
            break;
        case 'f':
        case 'F':
            my_putfloat((float) va_arg(*list, double), 6);
            *i = *i + 1;
            break;
        case 'x':
        case 'X':
            my_putstr(get_hex_from_int(format[*i + 1],
                va_arg(*list, unsigned int)));
            *i = *i + 1;
            break;
        default:
            get_format2(i, format, list);
    }
}

void my_printf(const char *format, ...)
{
    va_list list;
    int i = 0;

    COUNT = 0;
    va_start(list, format);
    while (format[i]) {
        if (format[i] == '%') {
            get_format(&i, format, &list);
        } else {
            my_putchar(format[i]);
        }
        i++;
    }
    va_end(list);
}
