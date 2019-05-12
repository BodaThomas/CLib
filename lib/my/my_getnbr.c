/*
** EPITECH PROJECT, 2018
** my_getnbr
** File description:
** The task05 of the CPool Day04
*/

#include <stdlib.h>
#include "lib.h"

int my_getnbr(char const *str)
{
    int i = 0;
    int length = my_strlen(str);
    int find = 0;
    int final = 0;

    while (i != length) {
        if (str[i] >= '0' && str[i] <= '9') {
            final = final * 10 + (str[i] - '0');
            find = find + 1;
        }
        if (!(str[i + 1] >= '0' && str[i + 1] <= '9') && (str[i] >= '0' &&
            str[i] <= '9')) {
            return final;
        }
        i++;
    }
    return final;
}
