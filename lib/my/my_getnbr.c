/*
** EPITECH PROJECT, 2023
** my_getnbr
** File description:
** Returns a number, sent as a string
*/

int my_getnbr(char const *str)
{
    int i = 0;
    int nb = 0;
    int negative = 1;

    if (str[0] == '-') {
        negative = -1;
        i++;
    }
    while (str[i] != '\0') {
        if (str[i] < '0' || str[i] > '9')
            return 0;
        nb = nb * 10 + str[i] - '0';
        i++;
    }
    return nb * negative;
}
