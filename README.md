# CLib :book:   [![Build Status](https://travis-ci.com/MrToto54/CLib.svg?branch=master)](https://travis-ci.com/MrToto54/CLib)
My personal C library that replace differents systems functions.
Please, if you're a students who want to make his own library due to a project school, don't "copy/paste" the codes. Do your **OWN** code.

## Functions :space_invader:
    int my_compute_power_rec(int nb, int p);
    int my_compute_square_root(int nb);
    int my_find_prime_sup(int nb);
    int my_getnbr(char const *str);
    int my_is_prime(int nb);
    int my_isneg(int n);
    int my_put_nbr(int nb);
    void my_putchar(char c);
    int my_putstr(char const *str);
    char *my_revstr(char *str);
    int my_str_isalpha(char const *str);
    int my_str_isnum(char const *str);
    char *my_strcat(char *dest, char const *src);
    char *my_strcpy(char *dest, char const *src);
    int my_strlen(char const *str);
    char *my_strncat(char *dest, char const *src, int nb);
    char *my_strncpy(char *dest, char const *src, int n);
    void my_swap(int *a, int *b);
    int my_strcmp(char const *s1, char const *s2);
    char **my_split(char const *str, char deli);

##Development status :construction:

| Functions | Description | Done |
| --- | --- | --- |
| `my_putchar` | Print one given char | :white_check_mark: |
| `my_isneg` | Check if the number given as parameter is negative |
| `my_put_nbr` | Print a given number | :white_check_mark: |
| `my_swap` |  | :white_check_mark: |
| `my_putstr` | Print a giver char* | :white_check_mark: |
| `my_strlen` | Return the size of a char* | :white_check_mark: |
| `my_getnbr` |  | :white_check_mark: |
| `my_sort_int_array` |  |
| `my_compute_power_rec` |  | :white_check_mark: |
| `my_compute_square_root` |  | :white_check_mark: |
| `my_is_prime` |  | :white_check_mark: |
| `my_find_prime_sup` |  | :white_check_mark: |
| `my_strcpy` |  | :white_check_mark: |
| `my_strncpy` |  | :white_check_mark: |
| `my_revstr` |  | :white_check_mark: |
| `my_strstr` |  |
| `my_strcmp` |  | :white_check_mark: |
| `my_strncmp` |  | :white_check_mark: |
| `my_strupcase` |  |
| `my_strlowcase` |  |
| `my_strcapitalize` |  |
| `my_str_isalpha` |  | :white_check_mark: |
| `my_str_isnum` |  | :white_check_mark: |
| `my_str_islower` |  |
| `my_str_isupper` |  |
| `my_str_isprintable` |  |
| `my_showstr` |  |
| `my_showmem` |  |
| `my_strcat` |  | :white_check_mark: |
| `my_strncat` |  | :white_check_mark: |