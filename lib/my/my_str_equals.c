/*
** EPITECH PROJECT, 2023
** my_str_equals
** File description:
** Compare two strings
*/

#include <stdbool.h>
#include "my.h"

int my_str_equals(char const *s1, char const *s2)
{
    bool flag = true;
    int i = 0;

    if (my_strlen(s1) != my_strlen(s2))
        return false;
    while (s1[i] && s2[i]) {
        if (s1[i] != s2[i]) {
            flag = false;
            break;
        }
        i++;
    }
    if (flag) {
        return true;
    } else {
        return false;
    }
}
