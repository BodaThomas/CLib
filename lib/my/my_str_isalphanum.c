/*
** EPITECH PROJECT, 2019
** my_str_isalphanum.c
** File description:
** Created by thomas
*/

#include "lib.h"

int my_srtr_isalphanum(const char *str)
{
    int str_length = my_strlen(str);
    int i = 0;

    while (i != str_length) {
        if (!((str[i] > 64 && str[i] < 91) ||
            (str[i] > 96 && str[i] < 123) ||
            (str[i] > 47 && str[i] < 58)))
            return (0);
        i++;
    }
    return (1);
}