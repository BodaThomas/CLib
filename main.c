/*
** EPITECH PROJECT, 2019
** CLib
** File description:
** The main function of the example program of the CLib
*/

#include <string.h>
#include "lib.h"
#include "example.h"

int main(int argc, char const *argv[])
{
    int i = 0;
    char* str = strdup("bonjour_à_tous");
    char**final = my_split(str, '_');
    while (final[i] != '\0') {
        my_putstr(final[i]);
        my_putchar('\n');
        i++;
    }

    if (argc > 1) {
        if (my_strcmp(argv[1], "-h") == 0) {
            help();
        }
    }
    return (0);
}
