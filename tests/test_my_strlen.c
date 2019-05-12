/*
** EPITECH PROJECT, 2019
** test_my_strlen.c
** File description:
** Created by thomas
*/

#include <criterion/criterion.h>

Test(my_strlen, check_my_strlen_output)
{
    char *str = "Hello World!";
    int len = my_strlen(str);

    cr_assert_eq(len, 12);
}
