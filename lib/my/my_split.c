/*
** EPITECH PROJECT, 2018
** CLib
** File description:
** The my_split function
*/

#include <stdlib.h>

int count_delim(char const *str, char delim)
{
    int i = 0;
    int count = 0;

    while (str[i] != '\0') {
        if (str[i] == delim)
            count++;
        i++;
    }
    return (count);
}

char **my_split(char *str, char const delim)
{
    int i = 0;
    int count = 0;
    char **final = malloc(sizeof(char *) * count_delim(str, delim) + 1);

    while (str[i] != '\0') {
        if (i == 0 || str[i - 1] == '\0')
            final[count] = str + i;
        if (str[i] == delim) {
            str[i] = '\0';
            count++;
        }
        i++;
    }
    final[count + 1] = NULL;
    return (final);
}
