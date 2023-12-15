/*
** EPITECH PROJECT, 2023
** MyPrintf - Header
** File description:
** Header file for MyPrintf project
*/

#include <stdarg.h>

#ifndef UTILS_H
    #define UTILS_H

int COUNT;

int get_octal(int o);

char *get_hex_from_int(char c, unsigned int nb);

char *get_addr(void *ptr);

void get_precision(int *i, const char *format, va_list list);

int get_unsigned(int nb);

void percent_e(float flt, char c);

#endif
