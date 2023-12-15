/*
** EPITECH PROJECT, 2023
** my_strcmp
** File description:
** Compare two strings
*/

#include "my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int flag = 1;
    int i = 0;

    while (s1[i] && s2[i]) {
        if (s1[i] != s2[i]) {
            flag = 0;
            break;
        }
        i++;
    }
    if (flag == 1) {
        return 1;
    } else {
        return 0;
    }
}
