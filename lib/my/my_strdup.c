/*
** EPITECH PROJECT, 2019
** my_strdup.c
** File description:
** Created by thomas
*/

#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

char *my_strdup(char const *src)
{
    char *dest = malloc(sizeof(char) * my_strlen(src) + 1);
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}