/*
** EPITECH PROJECT, 2023
** my_compute_power_it.c
** File description:
** Returns the power of a number
*/

int my_compute_power_it(int nb, int p)
{
    int i = 0;
    int r = p;
    int m = nb;
    int res = nb;

    while (i != r) {
        i++;
        res = res * m;
    }
    return res;
}
