# CLib :book:   [![Build Status](https://travis-ci.com/MrToto54/CLib.svg?branch=master)](https://travis-ci.com/MrToto54/CLib)
My personal C library that replace some basic systems functions.<br/>
Please, if you're a students who want to make his own library due to a project school, don't copy my code. Do your **OWN** code.

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

## Development status :construction:

| Functions | Description | Done |
| --- | --- | --- |
| `my_putchar` | Print one given char | :white_check_mark: |
| `my_isneg` | Check if the number given as parameter is negative | :white_check_mark: |
| `my_put_nbr` | Print a given number | :white_check_mark: |
| `my_swap` | Swap the content of two integers | :white_check_mark: |
| `my_putstr` | Print a given char* | :white_check_mark: |
| `my_strlen` | Return the size of a char* | :white_check_mark: |
| `my_getnbr` | Return a number, sent to the function as a string | :white_check_mark: |
| `my_sort_int_array` | Sort an integer array in ascending order |
| `my_compute_power_rec` | Return the first argument raised to the power `p` | :white_check_mark: |
| `my_compute_square_root` |  Return the square root (if it is a whole number) of the number | :white_check_mark: |
| `my_is_prime` | Return 1 if the number is prime and 0 if not | :white_check_mark: |
| `my_find_prime_sup` |  Return the smallest prime number that is greater than, or equal to, the number given | :white_check_mark: |
| `my_strcpy` | Copy a string into another | :white_check_mark: |
| `my_strncpy` | Copy `n` characters from a string into another | :white_check_mark: |
| `my_revstr` | Reverse a string | :white_check_mark: |
| `my_strdup` | Duplicate a string | :white_check_mark: |
| `my_strstr` |  |
| `my_strcmp` |  | :white_check_mark: |
| `my_strncmp` |  | :white_check_mark: |
| `my_strupcase` | Put every letter of every word in it in uppercase |
| `my_strlowcase` | Put every letter of every word in it in lowercase |
| `my_strcapitalize` | Capitalize the first letter of each word |
| `my_str_isalpha` | Return **1** if the string passed as parameter only contains alphabetical characters and **0** if the string contains another type of character | :white_check_mark: |
| `my_str_isnum` | Return **1** if the string passed as parameter only contains digits and **0** otherwise | :white_check_mark: |
| `my_str_islower` | Return **1** if the string passed as parameter only contains lowercase alphabetical characters and **0** otherwise |
| `my_str_isupper` | Return **1** if the string passed as parameter only contains uppercase alphabetical characters and **0** otherwise |
| `my_str_isprintable` | Return **1** if the string passed as parameter only contains printable characters and **0** otherwise |
| `my_showstr` | Print a string and return **0** |
| `my_showmem` | Print a memory dump and return **0** |
| `my_strcat` | Concatenate two strings | :white_check_mark: |
| `my_strncat` | Concatenate `n` characters of the source string to the end of the destination string | :white_check_mark: |
| `my_split` | | :warning: |
| `my_atoi` | | |
| `my_itoa` | | |
