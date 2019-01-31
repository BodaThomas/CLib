/*
** EPITECH PROJECT, 2019
** CLib
** File description:
** The main function of the example program of the CLib
*/

#include "lib.h"
#include "example.h"

int main(int argc, char const *argv[])
{
    if (argc > 1) {
        if (my_strcmp(argv[1], "-h") == 0) {
            help();
        }
    }
    return (0);
}
