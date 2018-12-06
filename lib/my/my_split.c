/*
** EPITECH PROJECT, 2018
** CLib
** File description:
** The my_split function
*/

// "bonjour je m'appelle thomas", ' ' > "bonjour" "je" "m'appelle" "thomas"
// "    bonjour      je   m'apelle    thomas    ", ' '

#include <stdlib.h>
#include "lib.h"

int main(int argc, char const *argv[]) {
    char **res = my_split("Bonjour je m'appelle Thomas", ' ');
    printf("%s\n", res[1]);
    return 0;
}

char **my_split(char const *str, char deli)
{
    char **final = malloc(sizeof(char *) * (numb_of_words(str, deli) + 1));
    int i = 0;
    int word_numb = 0;
    int i_numb = 0;

    final[numb_of_words(str, deli)] = '\0';
    while(i != my_strlen(str)) {
        final[word_numb] = malloc(sizeof(char) * (word_size(str, i, deli) + 1));
        final[word_numb][word_size(str, i, deli)] = '\0';
        final[word_numb][i_numb] = str[i];
        if (str[i] == '\0') {
            return (final);
        }
        if (str[i] == deli) {
            word_numb++;
            i_numb = 0;
        }
        i_numb++;
        i++;
    }
}

int numb_of_words(char *str, char delimiter)
{
    int i = 0;
    int numb_of_words = 0;

    while (i != my_strlen(str)) {
        if (str[i] == delimiter)
            numb_of_words++;
        i++;
    }
    return (numb_of_words);
}

int word_size(char *str, int pos, char delimiter)
{
    int size = 0;

    while (str[pos] != delimiter) {
        pos++;
        size++;
    }
    return (size);
}
